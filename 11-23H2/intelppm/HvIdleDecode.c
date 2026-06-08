/*
 * XREFs of HvIdleDecode @ 0x1C0003CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall HvIdleDecode(_OWORD *a1, __int64 a2, _OWORD *a3)
{
  __int64 v3; // rax

  *a3 = *a1;
  LOBYTE(v3) = (*(_QWORD *)a3 >> 52) & 0xF;
  if ( (_BYTE)v3 == 3 )
  {
    *(_DWORD *)a3 = a2;
  }
  else
  {
    v3 = *(_QWORD *)a3 ^ (a2 ^ *(_QWORD *)a3) & 0xFFFFFFFFFFFFFLL;
    *(_QWORD *)a3 = v3;
  }
  return v3;
}
