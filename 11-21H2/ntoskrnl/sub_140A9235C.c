/*
 * XREFs of sub_140A9235C @ 0x140A9235C
 * Callers:
 *     sub_140A8C69C @ 0x140A8C69C (sub_140A8C69C.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall sub_140A9235C(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rbx
  KIRQL v6; // dl
  __int64 v7; // rcx

  v5 = a1;
  if ( a1 == a2 )
  {
    *a3 = 0;
  }
  else
  {
    v6 = KeAcquireQueuedSpinLock(0xAuLL);
    if ( v5 == *(_QWORD *)(a2 + 24) )
    {
      *a3 = 1;
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 24);
      if ( v7 == a2 )
      {
        *a3 = 2;
      }
      else
      {
        do
        {
          if ( v5 == a2 )
            break;
          v5 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 48LL);
        }
        while ( v5 );
        if ( v5 )
        {
          *a3 = 3;
        }
        else
        {
          while ( v7 && v7 != a2 )
            v7 = *(_QWORD *)(v7 + 24);
          *a3 = 5 - (v7 != 0);
        }
      }
    }
    KeReleaseQueuedSpinLock(0xAuLL, v6);
  }
}
