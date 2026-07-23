/*
 * XREFs of sub_140A06B10 @ 0x140A06B10
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall sub_140A06B10(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( !*((_BYTE *)KeGetCurrentThread() + 562) )
    return sub_14042A5E0(a1, a2);
  ProbeForWrite(a1, 8uLL, 4u);
  result = sub_14042A5E0(&v5, v3);
  if ( (int)result >= 0 )
    *a1 = v5;
  return result;
}
