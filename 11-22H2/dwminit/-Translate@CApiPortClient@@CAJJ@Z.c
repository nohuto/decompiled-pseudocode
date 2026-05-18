/*
 * XREFs of ?Translate@CApiPortClient@@CAJJ@Z @ 0x180009C48
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180009644 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000994C (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180009AB8 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApiPortClient::Translate(unsigned int a1)
{
  int v1; // edx
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  bool v4; // dl
  __int64 result; // rax

  v4 = 1;
  if ( a1 != -2003303402 )
  {
    if ( a1 + 805306334 > 0x1F || (v1 = -2145124351, !_bittest(&v1, a1 + 805306334)) )
    {
      v2 = a1 + 805305825;
      if ( (unsigned int)v2 > 0x34 || (v3 = 0x10000000000041LL, !_bittest64(&v3, v2)) )
        v4 = 0;
    }
  }
  result = 2149986305LL;
  if ( !v4 )
    return a1;
  return result;
}
