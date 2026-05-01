/*
 * XREFs of ?Navigate@CoverWindowAcc@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z @ 0x1805DF5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CoverWindowAcc::Navigate(
        CoverWindowAcc *this,
        unsigned int a2,
        struct IRawElementProviderFragment **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // r14
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0LL;
  switch ( a2 )
  {
    case 0u:
      if ( *((_QWORD *)this + 4) )
      {
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 4);
        *a3 = (struct IRawElementProviderFragment *)*((_QWORD *)this + 4);
      }
      return 0LL;
    case 1u:
    case 2u:
      v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 4);
      if ( !v9 )
        return 0LL;
      v14 = 0LL;
      v10 = **v9;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      v11 = v10(v9, &GUID_231595a6_2227_4cb4_910c_0b70e7e3a76c, &v14);
      v6 = v11;
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, struct IRawElementProviderFragment **))(*(_QWORD *)v14 + 24LL))(
                v14,
                (char *)this - 8,
                a2,
                a3);
        v6 = v11;
        if ( v11 >= 0 )
        {
LABEL_20:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
          return v6;
        }
        v12 = 248LL;
      }
      else
      {
        v12 = 247LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_20;
    case 3u:
      if ( !*((_QWORD *)this + 4) )
      {
        v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *))this + 5))(
               *((_QWORD *)this + 5),
               &GUID_f7063da8_8359_439c_9297_bbc5299a7d87);
        if ( (v6 & 0x80000000) != 0 )
        {
          v7 = 231LL;
          goto LABEL_12;
        }
        return v6;
      }
      break;
    default:
      if ( a2 == 4 && !*((_QWORD *)this + 4) )
      {
        v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *))this + 7))(
               *((_QWORD *)this + 7),
               &GUID_f7063da8_8359_439c_9297_bbc5299a7d87);
        if ( (v6 & 0x80000000) != 0 )
        {
          v7 = 238LL;
LABEL_12:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v7,
            (int)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
            (const char *)v6);
          return v6;
        }
        return v6;
      }
      break;
  }
  return 0LL;
}
