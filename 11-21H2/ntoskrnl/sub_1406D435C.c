/*
 * XREFs of sub_1406D435C @ 0x1406D435C
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_1406310E4 @ 0x1406310E4 (sub_1406310E4.c)
 *     sub_1406D43E8 @ 0x1406D43E8 (sub_1406D43E8.c)
 *     sub_1406D45B4 @ 0x1406D45B4 (sub_1406D45B4.c)
 *     sub_14085A124 @ 0x14085A124 (sub_14085A124.c)
 *     sub_1409E512C @ 0x1409E512C (sub_1409E512C.c)
 *     sub_1409E52D0 @ 0x1409E52D0 (sub_1409E52D0.c)
 *     sub_1409E54B0 @ 0x1409E54B0 (sub_1409E54B0.c)
 *     sub_1409E57B8 @ 0x1409E57B8 (sub_1409E57B8.c)
 */

__int64 __fastcall sub_1406D435C(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // eax
  __int64 result; // rax
  int v6; // eax

  if ( a1 != *((_QWORD *)KeGetCurrentThread() + 23) )
    return 3221225659LL;
  if ( qword_140C5B100 || (result = sub_14085A124(), (int)result >= 0) )
  {
    v3 = qword_140C5B100;
    if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
    {
      *(_DWORD *)(a2 + 12) = -1;
    }
    else
    {
      v4 = *(_DWORD *)(a2 + 12);
      if ( v4 < 0xFFFFFF00 )
      {
        sub_1406D45B4(qword_140C5B100, a2);
        result = sub_1406D43E8(v3);
        if ( (int)result < 0 )
          return result;
        return 0LL;
      }
      switch ( v4 )
      {
        case 0xFFFFFFFE:
          v6 = sub_1409E512C(qword_140C5B100, a2);
          goto LABEL_16;
        case 0xFFFFFFFD:
          v6 = sub_1409E54B0(qword_140C5B100, a2);
LABEL_16:
          if ( !v6 )
            return 3221226021LL;
          return 0LL;
        case 0xFFFFFFFC:
          if ( !(unsigned __int8)sub_1409E57B8() )
            return 3221225506LL;
          sub_1409E52D0(v3, 1LL);
          *(_DWORD *)(a2 + 12) = *(_DWORD *)(*(_QWORD *)(v3 + 16) + 24LL);
          return 0LL;
        case 0xFFFFFFFB:
          sub_1406310E4((__int64 *)a2);
          return 0LL;
      }
    }
    return 3221225485LL;
  }
  return result;
}
