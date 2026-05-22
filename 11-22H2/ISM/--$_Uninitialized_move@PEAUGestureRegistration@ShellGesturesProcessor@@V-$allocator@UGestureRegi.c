/*
 * XREFs of ??$_Uninitialized_move@PEAUGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAPEAUGestureRegistration@ShellGesturesProcessor@@QEAU12@0PEAU12@AEAV?$allocator@UGestureRegistration@ShellGesturesProcessor@@@0@@Z @ 0x18017C70C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@QEAAPEAUGestureRegistration@ShellGesturesProcessor@@QEAU23@AEBU23@@Z @ 0x180013704 (--$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@-$vector@UGestureRegistr.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUGestureRegistration@ShellGesturesProcessor@@QEAU12@AEAV?$allocator@UGestureRegistration@ShellGesturesProcessor@@@0@@Z @ 0x18017C23C (--$_Destroy_range@V-$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAXPEAUG.c)
 */

__int64 *__fastcall std::_Uninitialized_move<ShellGesturesProcessor::GestureRegistration *>(
        char *a1,
        char *a2,
        __int64 *a3)
{
  char *v4; // r8
  signed __int64 v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 16;
    v5 = (char *)a3 - a1;
    do
    {
      *a3 = *((_QWORD *)v4 - 2);
      *(_DWORD *)&v4[v5 - 8] = *((_DWORD *)v4 - 2);
      *(_QWORD *)&v4[v5] = 0LL;
      if ( &v4[v5] != v4 )
      {
        *(_QWORD *)&v4[v5] = *(_QWORD *)v4;
        *(_QWORD *)v4 = 0LL;
      }
      a3 += 4;
      v4[v5 + 8] = v4[8];
      v4 += 32;
    }
    while ( v4 - 16 != a2 );
  }
  std::_Destroy_range<std::allocator<ShellGesturesProcessor::GestureRegistration>>(a3, a3);
  return a3;
}
