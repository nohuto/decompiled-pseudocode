/*
 * XREFs of sub_1403D1490 @ 0x1403D1490
 * Callers:
 *     sub_1403D0FE0 @ 0x1403D0FE0 (sub_1403D0FE0.c)
 * Callees:
 *     sub_1402856A8 @ 0x1402856A8 (sub_1402856A8.c)
 *     sub_1402857B4 @ 0x1402857B4 (sub_1402857B4.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     sub_1403A3B9C @ 0x1403A3B9C (sub_1403A3B9C.c)
 *     sub_1403A5298 @ 0x1403A5298 (sub_1403A5298.c)
 *     sub_14084D698 @ 0x14084D698 (sub_14084D698.c)
 */

char __fastcall sub_1403D1490(__int64 a1)
{
  char v1; // di
  KIRQL v3; // bl
  __int64 *v4; // r14
  __int64 v5; // rax
  KIRQL v6; // bl
  KIRQL v7; // dl
  char *v8; // rbx
  KIRQL v9; // bp
  KIRQL v11; // bl

  v1 = 1;
  while ( *(_DWORD *)(a1 + 1184) < (unsigned int)dword_140C49AC8 )
  {
    v3 = KeAcquireQueuedSpinLock(4uLL);
    v4 = sub_1402857B4(a1, 0);
    KeReleaseQueuedSpinLock(4uLL, v3);
    if ( v4 )
    {
      v5 = sub_14084D698(*(_QWORD *)(a1 + 8));
      *v4 = v5;
      if ( !v5 )
      {
        v1 = 0;
        v11 = KeAcquireQueuedSpinLock(4uLL);
        sub_1402856A8(a1, v4, 0);
        KeReleaseQueuedSpinLock(4uLL, v11);
        return v1;
      }
      v6 = KeAcquireQueuedSpinLock(4uLL);
      sub_1402856A8(a1, v4, 1);
      v7 = v6;
    }
    else
    {
      v8 = sub_1403A5298();
      if ( !v8 )
        return 0;
      v9 = KeAcquireQueuedSpinLock(4uLL);
      sub_1403A3B9C(a1, v8);
      if ( dword_140C49AE0 == 1 )
        *((_DWORD *)v8 + 1) = 1;
      v7 = v9;
    }
    KeReleaseQueuedSpinLock(4uLL, v7);
  }
  return v1;
}
