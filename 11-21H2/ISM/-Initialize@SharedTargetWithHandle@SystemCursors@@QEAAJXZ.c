/*
 * XREFs of ?Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ @ 0x180156A54
 * Callers:
 *     ?AttachCursorVisualToShellRoot@SystemCursor2@@QEAAJXZ @ 0x1800EBD3C (-AttachCursorVisualToShellRoot@SystemCursor2@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x1800B3850 (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800B4970 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??0?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUICompositor@Composition@UI@Windows@@@Z @ 0x1800EE5D0 (--0-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUI.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall SystemCursors::SharedTargetWithHandle::Initialize(SystemCursors::SharedTargetWithHandle *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64, void **); // rdi
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v14[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  void *v16; // [rsp+60h] [rbp+28h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+30h] BYREF
  __int64 *v18; // [rsp+70h] [rbp+38h] BYREF
  __int64 v19; // [rsp+78h] [rbp+40h] BYREF

  wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(
    v14,
    **(_QWORD **)this);
  v18 = 0LL;
  v2 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v14[0])(
         v14[0],
         &GUID_9cbd9312_070d_4588_9bf3_bbf528cf3e84,
         (__int64 *)&v18);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v17 = 0LL;
    v4 = *v18;
    v17 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v4 + 32))(
           v18,
           &v17);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v19 = 0LL;
      v6 = (**v17)(v17, &GUID_bcb4ad45_7609_4550_934f_16002a68fded, &v19);
      v3 = v6;
      if ( v6 >= 0 )
      {
        v16 = 0LL;
        v7 = (__int64)v18;
        v8 = *(__int64 (__fastcall **)(__int64, __int64, void **))(*v18 + 64);
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          &v16,
          0LL);
        v9 = v8(v7, v19, &v16);
        v3 = v9;
        if ( v9 >= 0 )
        {
          if ( (void **)((char *)this + 16) != &v16 )
          {
            wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
              (void **)this + 2,
              v16);
            v16 = 0LL;
          }
          v10 = *((_QWORD *)this + 1);
          v11 = (__int64)v17;
          *((_QWORD *)this + 1) = v17;
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          v12 = NtDCompositionDuplicateHandleToProcess(
                  *((_QWORD *)this + 2),
                  *((unsigned int *)this + 8),
                  (char *)this + 24);
          if ( v12 >= 0 )
            v3 = 0;
          else
            v3 = wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)0x135,
                   (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
                   (const char *)(unsigned int)v12);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x129,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
            (const char *)(unsigned int)v9);
        }
        wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v16);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x124,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
          (const char *)(unsigned int)v6);
      }
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v19);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x121,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
        (const char *)(unsigned int)v5);
    }
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
      (const char *)(unsigned int)v2);
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v18);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v14);
  return v3;
}
