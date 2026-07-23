/*
 * XREFs of KdRefreshDebuggerNotPresent @ 0x1403DC750
 * Callers:
 *     sub_1405674E0 @ 0x1405674E0 (sub_1405674E0.c)
 * Callees:
 *     sub_140A6F7A0 @ 0x140A6F7A0 (sub_140A6F7A0.c)
 *     sub_140A6F900 @ 0x140A6F900 (sub_140A6F900.c)
 *     sub_140A7131C @ 0x140A7131C (sub_140A7131C.c)
 */

BOOLEAN KdRefreshDebuggerNotPresent(void)
{
  __int64 v0; // rax
  char v1; // di
  BOOLEAN v2; // bl
  __int64 v3; // rcx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  if ( byte_140C09804 || !(_BYTE)KdDebuggerEnabled )
    return 1;
  v0 = -1LL;
  *((_QWORD *)&v5 + 1) = "KDTARGET: Refreshing KD connection\n";
  do
    ++v0;
  while ( aKdtargetRefres[v0] );
  LOWORD(v5) = v0;
  v1 = sub_140A6F7A0(0LL, 0LL);
  sub_140A7131C(&v5);
  v2 = (unsigned __int8)KdDebuggerNotPresent;
  LOBYTE(v3) = v1;
  sub_140A6F900(v3);
  return v2;
}
