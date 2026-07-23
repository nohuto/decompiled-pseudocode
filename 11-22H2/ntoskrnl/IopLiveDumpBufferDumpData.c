/*
 * XREFs of IopLiveDumpBufferDumpData @ 0x140A9A420
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x140A9C3C0 (IopLiveDumpProcessCorralStateChange.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
 *     MmMapMemoryDumpMdlEx @ 0x1406306F0 (MmMapMemoryDumpMdlEx.c)
 *     IopLiveDumpGetCapturePagesNoLock @ 0x140A9B81C (IopLiveDumpGetCapturePagesNoLock.c)
 */

__int64 __fastcall IopLiveDumpBufferDumpData(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // r13
  _QWORD *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi
  unsigned int v8; // r15d
  unsigned int v9; // ebp
  _QWORD *v10; // r12
  __int64 v11; // rdx
  _DWORD *v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  _DWORD *v16; // rdi
  unsigned __int64 v17; // rcx
  _DWORD *v18; // rsi
  __int64 v19; // [rsp+30h] [rbp-68h]
  __int64 v20; // [rsp+38h] [rbp-60h]
  _QWORD *v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+10h] BYREF
  PRTL_BITMAP_EX BitMapHeader; // [rsp+B0h] [rbp+18h]
  _DWORD *v25; // [rsp+B8h] [rbp+20h]

  v2 = *a1;
  v23 = 0LL;
  LODWORD(v22) = 0;
  result = *a2;
  v4 = v2 + 680;
  v20 = v2 + 680;
  if ( (unsigned int)result < *(_DWORD *)(v2 + 888) && (unsigned int)result < *(_DWORD *)(v2 + 1112) )
  {
    v5 = *(_QWORD **)(*(_QWORD *)(v2 + 1120) + 8LL * (unsigned int)result);
    v6 = *(_QWORD *)(v2 + 896) + 16LL * (unsigned int)result;
    v21 = v5;
    BitMapHeader = (PRTL_BITMAP_EX)(v2 + 544);
    v7 = *(_QWORD *)(v6 + 8) + 48LL;
    v19 = v7;
    while ( 1 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 32));
      IopLiveDumpGetCapturePagesNoLock(BitMapHeader, (__int64)&v22, (__int64)&v23);
      result = KxReleaseSpinLock((volatile signed __int64 *)(v4 + 32));
      v8 = v22;
      if ( !(_DWORD)v22 )
        break;
      v9 = 0;
      v10 = v5;
      v25 = *(_DWORD **)(*(_QWORD *)(v4 + 72) + 8 * v23);
      LODWORD(v11) = 0;
      v12 = v25;
      do
      {
        v13 = (unsigned int)v11;
        v11 = (unsigned int)(v11 + 1);
        *(_QWORD *)(v7 + 8 * v13) = *v10;
        if ( (_DWORD)v11 == 16 || (_DWORD)v11 && v9 == v8 - 1 )
        {
          v14 = *(_QWORD *)(v6 + 8);
          v15 = (unsigned int)((_DWORD)v11 << 12);
          *(_QWORD *)v14 = 0LL;
          *(_WORD *)(v14 + 10) = 0;
          *(_QWORD *)(v14 + 32) = 0LL;
          *(_QWORD *)(v14 + 40) = (unsigned int)v15;
          *(_WORD *)(v14 + 8) = 8 * ((v15 >> 12) + 6);
          MmMapMemoryDumpMdlEx(*(_QWORD *)v6, v11, *(_QWORD *)(v6 + 8), 0);
          v16 = v12;
          v12 = (_DWORD *)((char *)v12 + v15);
          v17 = (unsigned __int64)(unsigned int)v15 >> 2;
          v18 = *(_DWORD **)(*(_QWORD *)(v6 + 8) + 24LL);
          while ( v17 )
          {
            *v16++ = *v18++;
            --v17;
          }
          v7 = v19;
          LODWORD(v11) = 0;
        }
        ++v9;
        ++v10;
      }
      while ( v9 < v8 );
      v4 = v20;
      v5 = v21;
    }
  }
  return result;
}
