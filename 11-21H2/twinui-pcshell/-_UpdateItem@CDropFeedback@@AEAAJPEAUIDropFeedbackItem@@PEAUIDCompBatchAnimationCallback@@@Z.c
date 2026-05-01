/*
 * XREFs of ?_UpdateItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1805308D8
 * Callers:
 *     ?UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18052FF20 (-UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z @ 0x180530164 (-_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z.c)
 */

__int64 __fastcall CDropFeedback::_UpdateItem(
        CDropFeedback *this,
        struct IDropFeedbackItem *a2,
        struct IDCompBatchAnimationCallback *a3)
{
  int v5; // eax
  int Item; // r12d
  bool v7; // si
  int v8; // eax
  int v9; // eax
  struct IDropFeedbackItem *v10; // rbx
  int v11; // r15d
  int v12; // r14d
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rax
  double v16; // xmm0_8
  int v17; // r14d
  unsigned int v18; // esi
  __int64 v19; // rdi
  int (__fastcall *v20)(__int64, _QWORD, GUID *, struct IDCompBatchAnimationCallback **); // rbx
  struct IDCompBatchAnimationCallback *v22; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-48h] BYREF
  struct IDropFeedbackItem *v24; // [rsp+40h] [rbp-40h] BYREF
  RECT rc; // [rsp+48h] [rbp-38h] BYREF
  RECT rc2; // [rsp+58h] [rbp-28h] BYREF

  v24 = 0LL;
  v22 = a3;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v24);
  v5 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 80LL))(a2);
  Item = CDropFeedback::_FindItem(this, v5, &v24);
  if ( Item < 0 )
    goto LABEL_25;
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 96LL))(a2);
  if ( v8 < 0 )
    goto LABEL_25;
  if ( v8 > 1 )
  {
    if ( v8 == 2 )
    {
      v14 = *(_QWORD *)a2;
      rc = 0LL;
      (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(v14 + 120))(a2, &rc);
      v10 = v24;
      rc2 = 0LL;
      (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(*(_QWORD *)v24 + 120LL))(v24, &rc2);
      if ( IsRectEmpty(&rc) || EqualRect(&rc, &rc2) )
        goto LABEL_25;
      (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(*(_QWORD *)v10 + 128LL))(v10, &rc);
      goto LABEL_18;
    }
    if ( v8 != 3 )
      goto LABEL_25;
  }
  v9 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 104LL))(a2);
  v10 = v24;
  v11 = v9;
  v12 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)v24 + 104LL))(v24);
  v13 = v12 & 0x1E000 | v11;
  if ( v13 != v12 )
  {
    (*(void (__fastcall **)(struct IDropFeedbackItem *, _QWORD))(*(_QWORD *)v10 + 112LL))(v10, v13);
    v7 = ((v13 ^ v12) & 0xFF9FEECF) != 0;
  }
  v15 = *(_QWORD *)a2;
  rc = 0LL;
  (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(v15 + 120))(a2, &rc);
  rc2 = 0LL;
  (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(*(_QWORD *)v10 + 120LL))(v10, &rc2);
  if ( !IsRectEmpty(&rc) && !EqualRect(&rc, &rc2) )
  {
    (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(*(_QWORD *)v10 + 128LL))(v10, &rc);
    v7 = 1;
  }
  v16 = (*(double (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 144LL))(a2);
  if ( v16 == (*(double (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)v10 + 144LL))(v10) )
  {
    if ( !v7 )
      goto LABEL_25;
  }
  else
  {
    (*(void (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)v10 + 136LL))(v10);
  }
LABEL_18:
  Item = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *, struct IDCompBatchAnimationCallback *))(*(_QWORD *)v10 + 160LL))(
           v10,
           v22);
  if ( ((*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 104LL))(a2) & 8) != 0 )
  {
    v17 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 80LL))(a2);
    (*(void (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16), &v23);
    v18 = 0;
    if ( v23 )
    {
      while ( 1 )
      {
        v19 = *((_QWORD *)this + 16);
        v22 = 0LL;
        v20 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IDCompBatchAnimationCallback **))(*(_QWORD *)v19 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v22);
        if ( v20(v19, v18, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v22) >= 0
          && (*(unsigned int (__fastcall **)(struct IDCompBatchAnimationCallback *))(*(_QWORD *)v22 + 80LL))(v22) == v17 )
        {
          break;
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v22);
        if ( ++v18 >= v23 )
          goto LABEL_25;
      }
      (*(void (__fastcall **)(struct IDCompBatchAnimationCallback *))(*(_QWORD *)v22 + 184LL))(v22);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16), v18);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v22);
    }
  }
LABEL_25:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v24);
  return (unsigned int)Item;
}
