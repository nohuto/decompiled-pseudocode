/*
 * XREFs of IoReportInterruptActive @ 0x140397910
 * Callers:
 *     <none>
 * Callees:
 *     sub_140397944 @ 0x140397944 (sub_140397944.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall IoReportInterruptActive(unsigned int *a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  unsigned int j; // ebx
  __int64 v4; // rdi
  unsigned int i; // ebx

  if ( *a1 == 1 )
    return sub_140397944(*((_QWORD *)a1 + 1));
  result = *a1 - 2;
  if ( *a1 == 2 )
  {
    v4 = *((_QWORD *)a1 + 1);
    for ( i = 0; i < *(_DWORD *)(v4 + 292); ++i )
      result = sub_140397944(*(_QWORD *)(v4 + 8LL * i + 296) + 112LL);
  }
  else
  {
    result = *a1 - 3;
    if ( *a1 != 3 )
    {
      if ( *a1 != 4 )
        KeBugCheckEx(0xCAu, 0xCuLL, *a1, 0LL, 0LL);
      return sub_140397944(*((_QWORD *)a1 + 1));
    }
    v2 = *((_QWORD *)a1 + 1);
    for ( j = 0; j < *(_DWORD *)(v2 + 4); ++j )
      result = sub_140397944(*(_QWORD *)(v2 + 48LL * j + 24));
  }
  return result;
}
