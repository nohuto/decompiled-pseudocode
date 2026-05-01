/*
 * XREFs of ?_UpdateAutoGutters@CDropFeedback@@AEAAXXZ @ 0x1805304BC
 * Callers:
 *     ?UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18052FF20 (-UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805EF8A0 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

void __fastcall CDropFeedback::_UpdateAutoGutters(CDropFeedback *this, const struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  _DWORD *v2; // r13
  int v4; // eax
  __int64 v5; // rcx
  int v6; // r12d
  unsigned int v7; // r14d
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  int v11; // esi
  __int64 v12; // rdi
  int (__fastcall *v13)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v14; // rdi
  int (__fastcall *v15)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // [rsp+30h] [rbp-40h] BYREF
  __int64 v18; // [rsp+38h] [rbp-38h] BYREF
  int v19; // [rsp+40h] [rbp-30h]
  unsigned int v20; // [rsp+44h] [rbp-2Ch] BYREF
  __int128 v21; // [rsp+48h] [rbp-28h] BYREF
  __int128 v22; // [rsp+58h] [rbp-18h] BYREF

  v2 = (_DWORD *)((char *)this + 72);
  v4 = ImmersiveApplicationLayout::ComputeGutterWidth((CDropFeedback *)((char *)this + 72), a2);
  v5 = *((_QWORD *)this + 16);
  v6 = v4;
  v19 = v4;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 136LL))(v5);
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16), &v20);
  v7 = 0;
  if ( v20 )
  {
    while ( 1 )
    {
      v8 = *((_QWORD *)this + 16);
      v18 = 0LL;
      v9 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
      if ( v9(v8, v7, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v18) >= 0 )
        break;
LABEL_26:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
      if ( ++v7 >= v20 )
        return;
    }
    v21 = 0LL;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v18 + 120LL))(v18, &v21);
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 104LL))(v18) & 0x100000) != 0 )
    {
      v10 = 1;
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 96LL))(v18);
      if ( !v10 || v10 == 3 )
      {
        v11 = 24576;
        goto LABEL_9;
      }
    }
    v11 = 0;
LABEL_9:
    if ( v10 == 1 )
    {
      if ( v7 )
      {
        v12 = *((_QWORD *)this + 16);
        v17 = 0LL;
        v13 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v12 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
        if ( v13(v12, v7 - 1, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v17) >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v17 + 96LL))(v17) == 1
            || (v22 = 0LL,
                (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v17 + 120LL))(v17, &v22),
                v6 + DWORD2(v22) != (_DWORD)v21) )
          {
            v11 |= 0x2000u;
          }
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
      }
      else if ( (int)v21 > *v2 )
      {
        v11 |= 0x2000u;
      }
      if ( v7 + 1 >= v20 )
      {
        if ( SDWORD2(v21) < *((_DWORD *)this + 20) )
          v11 |= 0x4000u;
      }
      else
      {
        v14 = *((_QWORD *)this + 16);
        v17 = 0LL;
        v15 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v14 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
        if ( v15(v14, v7 + 1, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v17) >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v17 + 96LL))(v17) == 1
            || (v22 = 0LL,
                (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v17 + 120LL))(v17, &v22),
                (_DWORD)v22 - v19 != DWORD2(v21)) )
          {
            v11 |= 0x4000u;
          }
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
      }
      v6 = v19;
    }
    else if ( !v10 || v10 == 3 )
    {
      if ( (*(double (__fastcall **)(__int64))(*(_QWORD *)v18 + 144LL))(v18) == 0.0 )
      {
        v11 = 98304;
      }
      else
      {
        if ( !v7 && (int)v21 <= *v2 )
        {
          v11 &= ~0x2000u;
          if ( *((_BYTE *)this + 124) )
            v11 |= 0x8000u;
        }
        if ( v7 == v20 - 1 && SDWORD2(v21) >= *((_DWORD *)this + 20) )
        {
          v11 &= ~0x4000u;
          if ( *((_BYTE *)this + 124) )
            v11 |= 0x10000u;
        }
      }
    }
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 104LL))(v18);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 112LL))(v18, v11 | v16 & 0xFFFE1FFF);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 184LL))(v18);
    goto LABEL_26;
  }
}
