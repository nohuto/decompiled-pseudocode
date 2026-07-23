/*
 * XREFs of sub_140808344 @ 0x140808344
 * Callers:
 *     sub_1409974E8 @ 0x1409974E8 (sub_1409974E8.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A6BCF0 @ 0x140A6BCF0 (sub_140A6BCF0.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140751880 @ 0x140751880 (sub_140751880.c)
 */

char __fastcall sub_140808344(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  char v6; // di
  __int64 *v7; // rax
  __int64 *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax

  v6 = 0;
  ExAcquireFastMutex(&stru_140C237C0);
  v7 = sub_140751880(a1, -1);
  v8 = v7;
  if ( v7 )
  {
    v9 = v7[8];
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 4) >= 4u )
      {
        *a2 = *(_DWORD *)(v9 + 12);
        v10 = v8[9];
        if ( v10 )
        {
          if ( *(_DWORD *)(v10 + 4) >= 4u )
          {
            v6 = 1;
            *a3 = *(_DWORD *)(v10 + 12);
          }
        }
      }
    }
  }
  KeReleaseGuardedMutex(&stru_140C237C0);
  return v6;
}
