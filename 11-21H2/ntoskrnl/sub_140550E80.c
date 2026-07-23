/*
 * XREFs of sub_140550E80 @ 0x140550E80
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1403D82CC @ 0x1403D82CC (sub_1403D82CC.c)
 *     sub_140550B6C @ 0x140550B6C (sub_140550B6C.c)
 *     InbvCheckDisplayOwnership @ 0x140550BA0 (InbvCheckDisplayOwnership.c)
 *     sub_140550BFC @ 0x140550BFC (sub_140550BFC.c)
 *     sub_140550C9C @ 0x140550C9C (sub_140550C9C.c)
 *     sub_140550FDC @ 0x140550FDC (sub_140550FDC.c)
 *     PsTerminateSystemThread @ 0x1406E5A70 (PsTerminateSystemThread.c)
 */

void __fastcall sub_140550E80(PVOID StartContext)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -800000LL;
  do
  {
    KeDelayExecutionThread(0, 0, &Interval);
    sub_140550B6C(v2, v1);
    if ( !(unsigned int)sub_140550BFC(v4, v3) && dword_140D01868 == 1 )
      sub_140550FDC();
    sub_140550C9C(v6, v5);
  }
  while ( InbvCheckDisplayOwnership(v8, v7) );
  sub_1403D82CC(v10, v9);
  PsTerminateSystemThread(0);
}
