/*
 * XREFs of ?Scroll@AccessibleElementBase@@UEAAJW4ScrollAmount@@0@Z @ 0x180584B90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805850F0 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibleElementBase::Scroll(
        AccessibleElementBase *this,
        enum ScrollAmount a2,
        enum ScrollAmount a3)
{
  AccessibleElementBase *v5; // rbx
  int Element; // ebx
  int v7; // edi
  void *v8; // rbx
  void (__fastcall *v9)(void *, __int64); // rdi
  LANGID ThreadUILanguage_0; // ax
  __int64 v11; // rdx
  LANGID v12; // ax
  int v13; // esi
  void *v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = 0LL;
  v5 = (AccessibleElementBase *)((char *)this - 48);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  Element = AccessibleElementBase::_GetElement(v5, &GUID_2ee57b14_e8de_441b_ba80_94bbf2ee0423, &v15);
  if ( Element >= 0 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v15 + 96LL))(v15) )
    {
      if ( a3 && (v13 = a3 - 1) != 0 )
      {
        if ( (unsigned int)(v13 - 2) <= 1 )
          (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v15 + 32LL))(v15, 2LL);
      }
      else
      {
        (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v15 + 32LL))(v15, 1LL);
      }
      goto LABEL_14;
    }
    if ( a2 && (v7 = a2 - 1) != 0 )
    {
      if ( (unsigned int)(v7 - 2) > 1 )
      {
LABEL_14:
        Element = 0;
        goto LABEL_15;
      }
      v8 = v15;
      v9 = *(void (__fastcall **)(void *, __int64))(*(_QWORD *)v15 + 32LL);
      ThreadUILanguage_0 = GetThreadUILanguage_0();
      v11 = 4 - (unsigned int)((unsigned int)IsBiDiLocale(ThreadUILanguage_0) != 0);
    }
    else
    {
      v8 = v15;
      v9 = *(void (__fastcall **)(void *, __int64))(*(_QWORD *)v15 + 32LL);
      v12 = GetThreadUILanguage_0();
      v11 = (unsigned int)((unsigned int)IsBiDiLocale(v12) != 0) + 3;
    }
    v9(v8, v11);
    goto LABEL_14;
  }
LABEL_15:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  return (unsigned int)Element;
}
