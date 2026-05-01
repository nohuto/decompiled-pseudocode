/*
 * XREFs of sub_180011320 @ 0x180011320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_180011320(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // eax

  v3 = a2;
  LODWORD(a2) = a2 & 0x7FFFFFFF;
  v4 = v3 >> 31;
  if ( (_DWORD)a1 || a3 || (_DWORD)a2 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      sub_18000F6B0((RTL_SRWLOCK *)&byte_180032A38, a1, a2, a3);
    }
    else if ( a3 || (_DWORD)a2 == 254 )
    {
      sub_18000FAEC(&byte_180032A38, a1, a2, a3);
    }
    else
    {
      sub_180011F28(a1, a2, v4);
    }
  }
  else
  {
    sub_18000DCE0((__int64)&byte_180032A38);
  }
}
