/*
 * XREFs of sub_1407938B0 @ 0x1407938B0
 * Callers:
 *     sub_1406D7D74 @ 0x1406D7D74 (sub_1406D7D74.c)
 *     sub_1407919CC @ 0x1407919CC (sub_1407919CC.c)
 *     sub_1407920F0 @ 0x1407920F0 (sub_1407920F0.c)
 *     sub_14079240C @ 0x14079240C (sub_14079240C.c)
 *     sub_140792EFC @ 0x140792EFC (sub_140792EFC.c)
 *     sub_1407931C0 @ 0x1407931C0 (sub_1407931C0.c)
 *     sub_1407938B0 @ 0x1407938B0 (sub_1407938B0.c)
 *     sub_140793B84 @ 0x140793B84 (sub_140793B84.c)
 *     sub_14079A254 @ 0x14079A254 (sub_14079A254.c)
 * Callees:
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1406D7CC4 @ 0x1406D7CC4 (sub_1406D7CC4.c)
 *     sub_1407938B0 @ 0x1407938B0 (sub_1407938B0.c)
 *     sub_140793A34 @ 0x140793A34 (sub_140793A34.c)
 */

void __fastcall sub_1407938B0(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  signed __int64 *v4; // rsi
  int v5; // r13d
  int v8; // r12d
  unsigned int v9; // ebx
  int v10; // ebp
  __int64 v11; // rdi
  _QWORD *v12; // r14
  _QWORD *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  int v16; // edi
  struct _KEVENT *v17; // rcx

  v4 = (signed __int64 *)(a1 + 112);
  v5 = a3;
  v8 = 0;
  v9 = 1;
  v10 = 1;
  v11 = sub_140347C10(a1 + 112, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    sub_14029F350(v4, 0, v11, (__int64)v4);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  v12 = (_QWORD *)(a1 + 120);
  v13 = (_QWORD *)*v12;
  if ( (_QWORD *)*v12 != v12 )
  {
    do
    {
      if ( v10 && (*((_BYTE *)v13 + 36) & 1) != 0 )
        v10 = 0;
      v14 = sub_140793A34(v13 - 8, a2);
      v15 = *(v13 - 3);
      if ( v14 )
      {
        if ( (PEPROCESS)v15 == PsInitialSystemProcess )
        {
          v8 = 1;
        }
        else
        {
          v17 = *(struct _KEVENT **)(*(_QWORD *)(v15 + 2152) + 128LL);
          if ( v17 )
            KeSetEvent(v17, 1, 0);
        }
      }
      v13 = (_QWORD *)*v13;
    }
    while ( v13 != v12 );
    v5 = a3;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  sub_1402AFC00((ULONG_PTR)v4);
  if ( v10 && (a2 & 1) != 0 )
  {
    if ( v8 || !v5 )
      v9 = 0;
    v16 = a4;
    sub_1407938B0(a1, 8LL, v9, a4);
  }
  else
  {
    v16 = a4;
  }
  if ( v8 )
  {
    if ( v5 )
      sub_1406D7CC4(v16);
  }
}
