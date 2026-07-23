/*
 * XREFs of sub_1403D8834 @ 0x1403D8834
 * Callers:
 *     sub_140856DC0 @ 0x140856DC0 (sub_140856DC0.c)
 *     sub_140A81078 @ 0x140A81078 (sub_140A81078.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

__int64 __fastcall sub_1403D8834(_QWORD *Object, char *a2)
{
  KIRQL v4; // al
  __int64 v5; // r9
  unsigned int v6; // ebx
  int v7; // edx
  char v8; // cl

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = Object[1];
  v6 = 0;
  if ( !v5 && (Object[2] & 1) != 0 )
    goto LABEL_15;
  v7 = *((_DWORD *)Object + 4);
  if ( (v7 & 0x80u) == 0 && v5 && (*(_DWORD *)(*(_QWORD *)(v5 + 312) + 32LL) & 1) != 0 )
    goto LABEL_15;
  if ( (v7 & 0x10) == 0 )
  {
    v6 = -1073741808;
LABEL_15:
    KeReleaseQueuedSpinLock(0xAuLL, v4);
    ObfDereferenceObject(Object);
    return v6;
  }
  *a2 = 1;
  v8 = 1;
  while ( v5 )
  {
    *(_DWORD *)(*(_QWORD *)(v5 + 312) + 32LL) |= 1u;
    if ( *(_DWORD *)(v5 + 4) || *(_QWORD *)(v5 + 24) )
    {
      *a2 = 0;
      v8 = 0;
    }
    else
    {
      v8 = *a2;
    }
    v5 = *(_QWORD *)(v5 + 16);
  }
  if ( (*((_DWORD *)Object + 4) & 0x80u) != 0 && Object[1] )
  {
    *a2 = 0;
  }
  else if ( v8 )
  {
    *((_DWORD *)Object + 4) |= 1u;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return 3221225473LL;
}
