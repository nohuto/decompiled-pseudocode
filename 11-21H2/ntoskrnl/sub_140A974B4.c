/*
 * XREFs of sub_140A974B4 @ 0x140A974B4
 * Callers:
 *     sub_140A96B0C @ 0x140A96B0C (sub_140A96B0C.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 *     sub_140A8B2AC @ 0x140A8B2AC (sub_140A8B2AC.c)
 */

char __fastcall sub_140A974B4(int a1)
{
  USHORT v2; // ax
  __int64 v3; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(v2) = ++dword_140C29FEC;
  if ( (dword_140C29FC0 & 0x1000) != 0 )
    LOBYTE(v2) = sub_140A8B2AC(retaddr, 180LL);
  if ( qword_140D57768 )
  {
    v3 = qword_140D57768 + 72LL * (_InterlockedIncrement(&dword_140D5784C) & (unsigned int)(dword_140D4E01C - 1));
    *(_QWORD *)v3 = KeGetCurrentThread();
    v2 = RtlCaptureStackBackTrace(a1 + 1, 8u, (PVOID *)(v3 + 8), 0LL);
    if ( v2 < 8u )
      *(_QWORD *)(v3 + 8LL * v2 + 8) = 0LL;
  }
  return v2;
}
