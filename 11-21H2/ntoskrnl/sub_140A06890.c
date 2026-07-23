/*
 * XREFs of sub_140A06890 @ 0x140A06890
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140A06890(__int64 a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // r14
  int v7; // ecx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v9 = 0LL;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 + 8 > 0x7FFFFFFF0000LL || a2 + 8 < a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    v6 = *(_QWORD *)a2;
    v11 = *(_QWORD *)a2;
    ProbeForWrite(a3, 8uLL, 4u);
    if ( a4 )
      ProbeForWrite(a4, 8uLL, 4u);
    v7 = sub_14042A5E0(v6, &v9);
    if ( v7 >= 0 )
    {
      *a3 = v9;
      if ( a4 )
        *a4 = v10;
    }
  }
  else
  {
    return (unsigned int)sub_14042A5E0(*(_QWORD *)a2, a3);
  }
  return (unsigned int)v7;
}
