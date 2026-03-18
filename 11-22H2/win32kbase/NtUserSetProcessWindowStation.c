/*
 * XREFs of NtUserSetProcessWindowStation @ 0x1C00C22B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserSetProcessWindowStation(__int64 a1)
{
  int v1; // ebx

  v1 = 0;
  if ( qword_1C0295378 && (int)qword_1C0295378() >= 0 )
  {
    if ( qword_1C0295380 )
      return (int)qword_1C0295380(a1);
    else
      return -1073741637;
  }
  return v1;
}
