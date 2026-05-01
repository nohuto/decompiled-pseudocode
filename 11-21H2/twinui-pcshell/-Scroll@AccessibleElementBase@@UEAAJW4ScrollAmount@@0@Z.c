/*
 * XREFs of ?Scroll@AccessibleElementBase@@UEAAJW4ScrollAmount@@0@Z @ 0x1804CD390
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     GetThreadUILanguage_0 @ 0x18018A13C (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804CD8F0 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibleElementBase::Scroll(AccessibleElementBase *this, int a2, int a3)
{
  AccessibleElementBase *v5; // rbx
  int Element; // ebx
  void *v7; // rbx
  void (__fastcall *v8)(void *, __int64); // rdi
  LANGID v9; // ax
  __int64 v10; // rdx
  LANGID ThreadUILanguage_0; // ax
  void *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0LL;
  v5 = (AccessibleElementBase *)((char *)this - 48);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  Element = AccessibleElementBase::_GetElement(v5, &GUID_2ee57b14_e8de_441b_ba80_94bbf2ee0423, &v13);
  if ( Element >= 0 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v13 + 96LL))(v13) )
    {
      if ( a3 >= 0 )
      {
        if ( a3 <= 1 )
        {
          (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v13 + 32LL))(v13, 1LL);
        }
        else if ( (unsigned int)(a3 - 3) <= 1 )
        {
          (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v13 + 32LL))(v13, 2LL);
        }
      }
      goto LABEL_15;
    }
    if ( a2 >= 0 )
    {
      if ( a2 <= 1 )
      {
        v7 = v13;
        v8 = *(void (__fastcall **)(void *, __int64))(*(_QWORD *)v13 + 32LL);
        ThreadUILanguage_0 = GetThreadUILanguage_0();
        v10 = (unsigned int)((unsigned int)IsBiDiLocale(ThreadUILanguage_0) != 0) + 3;
        goto LABEL_8;
      }
      if ( (unsigned int)(a2 - 3) <= 1 )
      {
        v7 = v13;
        v8 = *(void (__fastcall **)(void *, __int64))(*(_QWORD *)v13 + 32LL);
        v9 = GetThreadUILanguage_0();
        v10 = 4 - (unsigned int)((unsigned int)IsBiDiLocale(v9) != 0);
LABEL_8:
        v8(v7, v10);
      }
    }
LABEL_15:
    Element = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  return (unsigned int)Element;
}
