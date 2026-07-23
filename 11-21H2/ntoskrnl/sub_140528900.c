/*
 * XREFs of sub_140528900 @ 0x140528900
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140510C60 @ 0x140510C60 (sub_140510C60.c)
 */

__int64 __fastcall sub_140528900(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 *v11; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v13; // ecx
  __int64 v14; // rdi
  unsigned int v15; // edx
  int v16; // r9d

  v4 = 0;
  if ( *a4 )
  {
    if ( *(_QWORD *)(a3 + 48) )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      v9 = (_QWORD *)sub_1403B1F04(a1, 48LL);
      v10 = (__int64)v9;
      if ( v9 )
      {
        *v9 = 0LL;
        v9[1] = 0LL;
        v9[4] = 0LL;
        v9[5] = 0LL;
        v9[2] = a1;
        v9[3] = a2;
        ObfReferenceObjectWithTag(*(PVOID *)(a3 + 8), 0x446C6148u);
        *(_QWORD *)(v10 + 32) = a3;
        *(_QWORD *)(a3 + 48) = v10;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4A0E0, 0LL);
        *(_DWORD *)(v10 + 40) = *a4;
        if ( (*a4 & 1) != 0 )
          *(_DWORD *)(v10 + 44) = sub_140510C60(a3);
        sub_14042A5E0(v10 + 40, a2);
        v11 = (__int64 *)qword_140C4A0F8;
        if ( *(__int64 **)qword_140C4A0F8 != &qword_140C4A0F0 )
          __fastfail(3u);
        *(_QWORD *)(v10 + 8) = qword_140C4A0F8;
        *(_QWORD *)v10 = &qword_140C4A0F0;
        *v11 = v10;
        qword_140C4A0F8 = v10;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4A0E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C4A0E0);
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned __int64)&qword_140C4A0E0 - qword_140C50630 >= 0x8000000000LL )
          v13 = -1;
        else
          v13 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
        _disable();
        v14 = (__int64)CurrentThread + 1696;
        v15 = 0;
        while ( (*(_QWORD *)v14 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C4A0E0 & 0x7FFFFFFFFFFFFFFCLL)
             || !*(_BYTE *)(v14 + 18)
             || (*(_DWORD *)v14 & 1) != 0
             || *(_DWORD *)(v14 + 8) != v13 )
        {
          ++v15;
          v14 += 96LL;
          if ( v15 >= 6 )
            goto LABEL_22;
        }
        *(_BYTE *)(v14 + 18) = 0;
        if ( !v14 )
        {
LABEL_22:
          if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140C4A0E0, v13, 0LL);
          _enable();
          return v4;
        }
        if ( *(__int64 *)v14 < 0 )
        {
          *(_BYTE *)v14 |= 2u;
          _enable();
          sub_14034EE30(v14);
          _disable();
        }
        v16 = *(_DWORD *)(v14 + 88);
        *(_DWORD *)(v14 + 88) = 0;
        *(_BYTE *)(v14 + 17) = 0;
        *(_QWORD *)v14 = 0LL;
        *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v14 + 16);
        _enable();
        if ( v16 )
          sub_14022B568((ULONG_PTR)CurrentThread, (__int64)&qword_140C4A0E0, v16);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741582;
  }
  return v4;
}
