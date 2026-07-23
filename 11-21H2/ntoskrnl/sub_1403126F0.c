/*
 * XREFs of sub_1403126F0 @ 0x1403126F0
 * Callers:
 *     sub_1402358D4 @ 0x1402358D4 (sub_1402358D4.c)
 *     sub_1402464E0 @ 0x1402464E0 (sub_1402464E0.c)
 *     sub_140252ED0 @ 0x140252ED0 (sub_140252ED0.c)
 *     sub_140271020 @ 0x140271020 (sub_140271020.c)
 *     sub_1402724C0 @ 0x1402724C0 (sub_1402724C0.c)
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_140281620 @ 0x140281620 (sub_140281620.c)
 *     sub_14029F6FC @ 0x14029F6FC (sub_14029F6FC.c)
 *     sub_1402CD9C0 @ 0x1402CD9C0 (sub_1402CD9C0.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_1402EACBC @ 0x1402EACBC (sub_1402EACBC.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 *     sub_14031E900 @ 0x14031E900 (sub_14031E900.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 *     sub_14031FD60 @ 0x14031FD60 (sub_14031FD60.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140321F70 @ 0x140321F70 (sub_140321F70.c)
 *     sub_1403265B0 @ 0x1403265B0 (sub_1403265B0.c)
 *     sub_140339370 @ 0x140339370 (sub_140339370.c)
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_140339D70 @ 0x140339D70 (sub_140339D70.c)
 *     sub_14033AC90 @ 0x14033AC90 (sub_14033AC90.c)
 *     sub_14033D80C @ 0x14033D80C (sub_14033D80C.c)
 *     sub_1403536F0 @ 0x1403536F0 (sub_1403536F0.c)
 *     sub_140375974 @ 0x140375974 (sub_140375974.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_140395958 @ 0x140395958 (sub_140395958.c)
 *     sub_140580CE0 @ 0x140580CE0 (sub_140580CE0.c)
 *     sub_1405A6DAC @ 0x1405A6DAC (sub_1405A6DAC.c)
 *     sub_1405B2088 @ 0x1405B2088 (sub_1405B2088.c)
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 *     sub_1406F7D78 @ 0x1406F7D78 (sub_1406F7D78.c)
 *     sub_1406F7F40 @ 0x1406F7F40 (sub_1406F7F40.c)
 *     sub_14096D8A8 @ 0x14096D8A8 (sub_14096D8A8.c)
 *     sub_140977FF8 @ 0x140977FF8 (sub_140977FF8.c)
 *     sub_140980FA0 @ 0x140980FA0 (sub_140980FA0.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall sub_1403126F0(unsigned __int64 a1)
{
  __int64 v1; // r9
  __int64 **result; // rax
  unsigned __int64 v3; // r8

  v1 = *((_QWORD *)KeGetCurrentThread() + 23);
  result = *(__int64 ***)(v1 + 2016);
  if ( !result )
    return 0LL;
  v3 = a1 >> 12;
  if ( a1 >> 12 < (*((unsigned int *)result + 6) | ((unsigned __int64)*((unsigned __int8 *)result + 32) << 32))
    || v3 > (*((unsigned int *)result + 7) | ((unsigned __int64)*((unsigned __int8 *)result + 33) << 32)) )
  {
    result = *(__int64 ***)(v1 + 2008);
    if ( result )
    {
      while ( 1 )
      {
        if ( v3 > (*((unsigned int *)result + 7) | ((unsigned __int64)*((unsigned __int8 *)result + 33) << 32)) )
        {
          result = (__int64 **)result[1];
        }
        else
        {
          if ( v3 >= (*((unsigned int *)result + 6) | ((unsigned __int64)*((unsigned __int8 *)result + 32) << 32)) )
          {
            *(_QWORD *)(v1 + 2016) = result;
            return result;
          }
          result = (__int64 **)*result;
        }
        if ( !result )
          return result;
      }
    }
    return 0LL;
  }
  return result;
}
