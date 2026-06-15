/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800281F0
 * Callers:
 *     ?InitAdapterInformation@EndpointDevice@@AEAAJXZ @ 0x180027A44 (-InitAdapterInformation@EndpointDevice@@AEAAJXZ.c)
 *     ?InitTopologyIdInfo@EndpointDevice@@AEAAJXZ @ 0x180027C60 (-InitTopologyIdInfo@EndpointDevice@@AEAAJXZ.c)
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18005C0C4 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     ?CommonInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXPEAUIMMDevice@@@Z @ 0x1800F2140 (-CommonInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@Bl.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18012D45C (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x18006A809 (memcpy_0.c)
 *     memmove_0 @ 0x1800759E8 (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800D32C8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::wstring::assign(char *a1, void *Src, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _WORD *v10; // rax
  _WORD *v11; // rbp
  char *v13; // rbp
  __int64 v14; // rbx

  v3 = *((_QWORD *)a1 + 3);
  if ( a3 <= v3 )
  {
    v13 = a1;
    if ( v3 >= 8 )
      v13 = *(char **)a1;
    v14 = 2 * a3;
    *((_QWORD *)a1 + 2) = a3;
    memmove_0(v13, Src, 2 * a3);
    *(_WORD *)&v13[v14] = 0;
  }
  else
  {
    v7 = 0x7FFFFFFFFFFFFFFELL;
    if ( a3 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlength_error("string too long");
    if ( (a3 | 7) > 0x7FFFFFFFFFFFFFFELL || (v8 = v3 >> 1, v3 > 0x7FFFFFFFFFFFFFFELL - (v3 >> 1)) )
    {
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v7 = v8 + v3;
      if ( (a3 | 7) >= v8 + v3 )
        v7 = a3 | 7;
      v9 = v7 + 1;
      if ( (unsigned __int64)(v7 + 1) > 0x7FFFFFFFFFFFFFFFLL )
        std::_Throw_bad_array_new_length();
    }
    v10 = (_WORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * v9);
    *((_QWORD *)a1 + 3) = v7;
    *((_QWORD *)a1 + 2) = a3;
    v11 = v10;
    memcpy_0(v10, Src, 2 * a3);
    v11[a3] = 0;
    if ( v3 >= 8 )
      std::_Deallocate<16,0>(*(_QWORD *)a1, 2 * v3 + 2);
    *(_QWORD *)a1 = v11;
  }
  return a1;
}
