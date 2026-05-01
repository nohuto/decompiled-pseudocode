/*
 * XREFs of ?PrepareForExitAnimation@CDropFeedback@@UEAAJPEAPEAUIDropFeedbackArray@@@Z @ 0x1805E9D30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropFeedback::PrepareForExitAnimation(CDropFeedback *this, struct IDropFeedbackArray **a2)
{
  unsigned int v2; // esi
  __int64 *v3; // r14
  __int64 v5; // rcx
  unsigned int v7; // ebp
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rbx
  struct IDropFeedbackArray *v10; // rax
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v3 = (__int64 *)((char *)this + 104);
  *a2 = 0LL;
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 24LL))(v5, &v12);
    v7 = v12;
    while ( (--v7 & 0x80000000) == 0 )
    {
      v8 = *v3;
      v13 = 0LL;
      v9 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
      if ( v9(v8, v7, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v13) >= 0
        && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13) == 1
         || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13) == 2
         || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13) == 3
         || ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 104LL))(v13) & 0x80000) != 0) )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v3 + 48LL))(*v3, v7);
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14), v13);
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
    }
    v10 = (struct IDropFeedbackArray *)*v3;
    *v3 = 0LL;
    *a2 = v10;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v3);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v2;
}
