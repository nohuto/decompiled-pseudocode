/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6398c5b1b1e1150af4a78b6929f9eccb___ @ 0x18040FC80
 * Callers:
 *     ?SetCustomResourceSet@UwpWindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180416ED0 (-SetCustomResourceSet@UwpWindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Fou.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6398c5b1b1e1150af4a78b6929f9eccb___(
        unsigned int a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v4; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  int v7; // edi
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = a3;
  v9 = a1;
  if ( CoGetApartmentType((APTTYPE *)&v10, (APTTYPEQUALIFIER *)&v11) < 0 || !(_DWORD)v10 || (_DWORD)v10 == 3 )
    v4 = 0;
  else
    v4 = 4;
  v9 = 0;
  v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v5);
    *v6 = off_1806438D8;
    v6[3] = &v9;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = SHTaskPoolQueueTask(v4, 32LL, a2, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  if ( v7 >= 0 )
    return v9;
  return (unsigned int)v7;
}
