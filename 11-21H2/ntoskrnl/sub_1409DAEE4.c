/*
 * XREFs of sub_1409DAEE4 @ 0x1409DAEE4
 * Callers:
 *     sub_1406D9E90 @ 0x1406D9E90 (sub_1406D9E90.c)
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_1409DB278 @ 0x1409DB278 (sub_1409DB278.c)
 *     sub_1409DB614 @ 0x1409DB614 (sub_1409DB614.c)
 *     sub_1409DB704 @ 0x1409DB704 (sub_1409DB704.c)
 */

__int64 __fastcall sub_1409DAEE4(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v3; // edi
  int v6; // ebx

  v3 = a2;
  v6 = 0;
  if ( EtwEventEnabled(qword_140C16E68, &stru_140038B20) )
  {
    v6 = sub_1409DB278(a1, (unsigned __int16)v3, a3);
    if ( v6 < 0 )
      v6 = 0;
  }
  if ( (unsigned __int8)sub_1409DB614() )
  {
    v6 = sub_1409DB704(a1, v3);
    if ( v6 < 0 )
      return 0;
  }
  return (unsigned int)v6;
}
