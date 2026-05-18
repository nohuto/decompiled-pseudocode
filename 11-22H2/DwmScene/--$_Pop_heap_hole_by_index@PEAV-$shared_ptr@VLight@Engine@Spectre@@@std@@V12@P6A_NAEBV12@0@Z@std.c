/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@V12@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@_J1$$QEAV10@P6A_NAEBV10@3@Z@Z @ 0x18007181C
 * Callers:
 *     ??$_Make_heap_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@0P6A_NAEBV10@1@Z@Z @ 0x18007146C (--$_Make_heap_unchecked@PEAV-$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPE.c)
 *     ??$_Sort_heap_unchecked@PEAV?$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VLight@Engine@Spectre@@@0@0P6A_NAEBV10@1@Z@Z @ 0x18007194C (--$_Sort_heap_unchecked@PEAV-$shared_ptr@VLight@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPE.c)
 * Callees:
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Pop_heap_hole_by_index<std::shared_ptr<Spectre::Engine::Light> *,std::shared_ptr<Spectre::Engine::Light>,bool (*)(std::shared_ptr<Spectre::Engine::Light> const &,std::shared_ptr<Spectre::Engine::Light> const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int8 (__fastcall *a5)(__int64, __int64))
{
  __int64 v5; // r12
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 i; // rdi
  __int64 v13; // rdi

  v5 = a3 - 1;
  v8 = (a3 - 1) >> 1;
  v9 = a2;
  for ( i = a2; i < v8; v9 = i )
  {
    i = 2 * i + 2;
    if ( a5(a1 + 16 * i, a1 + 16 * i - 16) )
      --i;
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 16 * v9), (__int64 *)(a1 + 16 * i));
  }
  if ( i == v8 && (a3 & 1) == 0 )
  {
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(
      (_QWORD *)(a1 + 16 * v9),
      (__int64 *)(16 * a3 + a1 - 16));
    v9 = v5;
  }
  if ( a2 < v9 )
  {
    do
    {
      v13 = (v9 - 1) >> 1;
      if ( !a5(a1 + 16 * v13, (__int64)a4) )
        break;
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(
        (_QWORD *)(a1 + 16 * v9),
        (__int64 *)(a1 + 16 * ((v9 - 1) >> 1)));
      v9 = (v9 - 1) >> 1;
    }
    while ( a2 < v13 );
  }
  return std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 16 * v9), a4);
}
