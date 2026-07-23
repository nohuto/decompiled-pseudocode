/*
 * XREFs of FsRtlIsMobileOS @ 0x1407FCB50
 * Callers:
 *     sub_140AFC9DC @ 0x140AFC9DC (sub_140AFC9DC.c)
 * Callees:
 *     <none>
 */

bool FsRtlIsMobileOS()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  return (unsigned int)TmCurrentTransaction_0(&v1) == -1073741637;
}
