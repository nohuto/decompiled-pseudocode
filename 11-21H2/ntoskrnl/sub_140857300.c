/*
 * XREFs of sub_140857300 @ 0x140857300
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     sub_1406BF0AC @ 0x1406BF0AC (sub_1406BF0AC.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 */

__int64 __fastcall sub_140857300(int *a1, HANDLE *a2)
{
  int v2; // eax
  bool v5; // cf
  int inserted; // edi
  _OWORD *v7; // rsi
  _DWORD *v8; // rbx
  unsigned __int64 v9; // rax
  ULONG_PTR v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13; // edi
  PVOID *NewObject; // [rsp+20h] [rbp-49h]
  __int128 v16; // [rsp+50h] [rbp-19h] BYREF
  __int128 v17; // [rsp+60h] [rbp-9h]
  _DWORD v18[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v19; // [rsp+78h] [rbp+Fh]
  __int64 v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]
  __int128 v23; // [rsp+90h] [rbp+27h]
  PVOID Object; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp+77h] BYREF

  v2 = *a1;
  Object = 0LL;
  Handle = 0LL;
  v18[1] = 0;
  v22 = 0;
  v16 = 0LL;
  v17 = 0LL;
  if ( (unsigned int)(v2 - 1) > 0x3FFFF )
    *a1 = 0x40000;
  if ( qword_140C5AE28 )
  {
    v18[0] = 48;
    v19 = 0LL;
    v5 = *((_BYTE *)KeGetCurrentThread() + 562) != 0;
    v20 = 0LL;
    v23 = 0LL;
    v21 = v5 ? 0 : 0x200;
    inserted = sub_14072B3B0(
                 0,
                 *(_DWORD **)(qword_140C5AE28 + 32),
                 (int)v18,
                 *((_BYTE *)KeGetCurrentThread() + 562),
                 (__int64)NewObject,
                 640,
                 0,
                 0,
                 &Object,
                 0LL);
    if ( inserted < 0 )
    {
      v8 = Object;
    }
    else
    {
      v7 = Object;
      memset(Object, 0, 0x280uLL);
      v7[1] = 0LL;
      *((_QWORD *)v7 + 2) = 0LL;
      *((_QWORD *)v7 + 8) = 0LL;
      *((_QWORD *)v7 + 9) = 0LL;
      *((_QWORD *)v7 + 6) = 0LL;
      *((_QWORD *)v7 + 7) = 0LL;
      memset(v7 + 5, 0, 0x200uLL);
      *((_QWORD *)v7 + 12) = qword_140C5AE28 + 872;
      *((_QWORD *)v7 + 4) = *(_QWORD *)a1;
      *((_DWORD *)v7 + 10) = a1[2];
      *((_DWORD *)v7 + 159) |= 1u;
      v8 = Object;
      *((_DWORD *)Object + 148) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v9 = sub_1402F5718();
      v10 = qword_140C5AE28 + 16;
      v8[149] = v9 / 0x2710;
      v8[150] = 1;
      sub_1402D66A8(v10);
      v11 = qword_140C5AE28;
      v12 = *(_QWORD **)(qword_140C5AE28 + 8);
      if ( *v12 != qword_140C5AE28 )
        __fastfail(3u);
      *(_QWORD *)v8 = qword_140C5AE28;
      *((_QWORD *)v8 + 1) = v12;
      *v12 = v8;
      *(_QWORD *)(v11 + 8) = v8;
      sub_1402935D0(v11 + 16);
      v16 = 1uLL;
      v17 = (unsigned __int64)v8;
      inserted = sub_1406BF0AC((__int64)sub_1407A5B90, (__int64)&v16);
      if ( inserted >= 0 )
      {
        sub_1402D66A8((ULONG_PTR)(v7 + 1));
        v13 = v8[153];
        if ( !v13 )
          *((_DWORD *)v7 + 159) &= ~1u;
        sub_1402935D0((ULONG_PTR)(v7 + 1));
        if ( v13 )
        {
          inserted = -1073741670;
        }
        else
        {
          inserted = ObInsertObject(v8, 0LL, 1u, 1u, 0LL, &Handle);
          if ( inserted < 0 )
          {
            v8 = 0LL;
          }
          else
          {
            inserted = 0;
            *a2 = Handle;
            Handle = 0LL;
          }
        }
      }
    }
    if ( Handle )
      NtClose(Handle);
    if ( v8 )
      ObfDereferenceObject(v8);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)inserted;
}
