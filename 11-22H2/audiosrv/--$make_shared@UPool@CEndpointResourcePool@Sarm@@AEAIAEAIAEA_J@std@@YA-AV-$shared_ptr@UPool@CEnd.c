/*
 * XREFs of ??$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA?AV?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@0@AEAI0AEA_J@Z @ 0x180137F60
 * Callers:
 *     ?Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z @ 0x180138140 (-Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ??$?0AEAIAEAIAEA_J@?$_Ref_count_obj2@UPool@CEndpointResourcePool@Sarm@@@std@@QEAA@AEAI0AEA_J@Z @ 0x180137D4C (--$-0AEAIAEAIAEA_J@-$_Ref_count_obj2@UPool@CEndpointResourcePool@Sarm@@@std@@QEAA@AEAI0AEA_J@Z.c)
 */

_QWORD *__fastcall std::make_shared<Sarm::CEndpointResourcePool::Pool,unsigned int &,unsigned int &,__int64 &>(
        _QWORD *a1,
        int *a2,
        int *a3,
        __int64 *a4)
{
  LPVOID v8; // rax
  __int64 v9; // rcx
  _QWORD *result; // rax

  v8 = operator new(0x30uLL);
  v9 = 0LL;
  if ( v8 )
    v9 = std::_Ref_count_obj2<Sarm::CEndpointResourcePool::Pool>::_Ref_count_obj2<Sarm::CEndpointResourcePool::Pool>(
           (__int64)v8,
           a2,
           a3,
           a4);
  *a1 = v9 + 16;
  result = a1;
  a1[1] = v9;
  return result;
}
