/*
 * XREFs of ??0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z @ 0x18002A0E8
 * Callers:
 *     ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18002A230 (-Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
RIMRawInputProvider *__fastcall RIMRawInputProvider::RIMRawInputProvider(
        RIMRawInputProvider *this,
        struct IRawInputClient *a2)
{
  struct IRawInputClient *v4; // rax
  struct IRawInputClient *v6; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &RIMRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &RIMRawInputProvider::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = "CMK:InvalidateInput";
  v4 = (struct IRawInputClient *)*((_QWORD *)this + 3);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = (struct IRawInputClient *)*((_QWORD *)this + 3);
    }
    v6 = v4;
    *((_QWORD *)this + 3) = a2;
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)&v6);
  }
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 7);
  return this;
}
