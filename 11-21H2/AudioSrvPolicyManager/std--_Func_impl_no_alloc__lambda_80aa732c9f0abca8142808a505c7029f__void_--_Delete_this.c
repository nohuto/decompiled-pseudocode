/*
 * XREFs of std::_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_::_Delete_this @ 0x18000DE00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_::_Delete_this(
        void *a1,
        char a2)
{
  std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)a1 + 16);
  if ( a2 )
    operator delete(a1);
}
