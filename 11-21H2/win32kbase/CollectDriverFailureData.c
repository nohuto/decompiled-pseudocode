/*
 * XREFs of CollectDriverFailureData @ 0x1C01732A4
 * Callers:
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C0152348 (-DrvDriverFailure@@YAJXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CollectDriverFailureData(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 Pool2; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // r8
  wchar_t *v8; // rdx
  int v9; // r9d
  __int64 v10; // r10
  __int64 v11; // rdi
  __int64 v12; // rcx
  wchar_t *v13; // rax
  __int64 v14; // r11
  __int128 v15; // xmm0
  __int16 *v16; // rcx
  __int64 v17; // rsi
  __int16 v18; // r11

  result = ExAllocatePool2(64LL, 312LL);
  if ( result )
  {
    *(_DWORD *)result = gbBaseVideo;
    *(_DWORD *)(result + 12) = gbDeferredInvalidateDualView;
    *(_WORD *)(result + 16) = gdmLogPixels;
    *(_QWORD *)(result + 304) = a2;
    *a1 = result;
    *(_QWORD *)(result + 4) = 0LL;
    *(_DWORD *)(result + 20) = gcNextGlobalDeviceNumber;
    *(_DWORD *)(result + 24) = gcNextGlobalPhysicalOutputNumber;
    *(_DWORD *)(result + 28) = gcNextGlobalVirtualOutputNumber;
    *(_QWORD *)(result + 32) = gpGraphicsDeviceList;
    *(_QWORD *)(result + 40) = gpGraphicsDeviceListLast;
    *(_DWORD *)(result + 48) = gcFailedModeChanges;
    *(_DWORD *)(result + 52) = gcRemoteNextGlobalDeviceNumber;
    *(_DWORD *)(result + 56) = gcLocalNextGlobalDeviceNumber;
    *(_QWORD *)(result + 64) = gpRemoteGraphicsDeviceList;
    *(_QWORD *)(result + 72) = gpLocalGraphicsDeviceList;
    *(_QWORD *)(result + 80) = gpRemoteGraphicsDeviceListLast;
    *(_QWORD *)(result + 88) = gpLocalGraphicsDeviceListLast;
    *(_QWORD *)(result + 96) = gpRemoteDiscGraphicsDevice;
    *(_QWORD *)(result + 104) = gpRemoteMirrorGraphicsDevice;
    *(_QWORD *)(result + 112) = gpLocalDiscGraphicsDevice;
    *(_DWORD *)(result + 120) = gcLocalNextGlobalPhysicalOutputNumber;
    *(_DWORD *)(result + 124) = gcLocalNextGlobalVirtualOutputNumber;
    *(_DWORD *)(result + 128) = gcRemoteNextGlobalPhysicalOutputNumber;
    *(_DWORD *)(result + 132) = gcRemoteNextGlobalVirtualOutputNumber;
    *(_WORD *)(result + 136) = gProtocolType;
    if ( qword_1C0297068 )
      wcsncpy_s((wchar_t *)(result + 138), 0x50uLL, qword_1C0297068, 0xFFFFFFFFFFFFFFFFuLL);
    Pool2 = ExAllocatePool2(64LL, 4096LL);
    v6 = Pool2;
    if ( Pool2 )
      a1[1] = Pool2;
    result = ExAllocatePool2(64LL, 4096LL);
    v7 = result;
    if ( result )
      a1[2] = result;
    v8 = gpGraphicsDeviceList;
    v9 = 0;
    if ( gpGraphicsDeviceList )
    {
      v10 = 0LL;
      v11 = 0LL;
      do
      {
        if ( v10 >= 512 )
          break;
        v12 = v6;
        v13 = v8;
        v14 = 2LL;
        do
        {
          v15 = *(_OWORD *)v13;
          v13 += 64;
          *(_OWORD *)v12 = v15;
          v12 += 128LL;
          *(_OWORD *)(v12 - 112) = *((_OWORD *)v13 - 7);
          *(_OWORD *)(v12 - 96) = *((_OWORD *)v13 - 6);
          *(_OWORD *)(v12 - 80) = *((_OWORD *)v13 - 5);
          *(_OWORD *)(v12 - 64) = *((_OWORD *)v13 - 4);
          *(_OWORD *)(v12 - 48) = *((_OWORD *)v13 - 3);
          *(_OWORD *)(v12 - 32) = *((_OWORD *)v13 - 2);
          *(_OWORD *)(v12 - 16) = *((_OWORD *)v13 - 1);
          --v14;
        }
        while ( v14 );
        *(_OWORD *)v12 = *(_OWORD *)v13;
        *(_OWORD *)(v12 + 16) = *((_OWORD *)v13 + 1);
        *(_OWORD *)(v12 + 32) = *((_OWORD *)v13 + 2);
        result = *((_QWORD *)v13 + 6);
        *(_QWORD *)(v12 + 48) = result;
        if ( v7 )
        {
          if ( v9 < 4096 )
          {
            v16 = (__int16 *)*((_QWORD *)v8 + 25);
            if ( v16 )
            {
              v17 = v9;
              v18 = 32;
              for ( result = v9 + 2LL; result < 0x1000; result = v9 + 2LL )
              {
                v9 += 2;
                *(_WORD *)(v11 + v7) = *v16;
                v11 += 2LL;
                result = (unsigned __int16)*v16;
                if ( !(_WORD)result && !v18 )
                  break;
                v18 = *v16++;
              }
              if ( v16 != *((__int16 **)v8 + 25) )
              {
                result = v7 + 2 * v17;
                *(_QWORD *)(v6 + 200) = result;
              }
            }
          }
        }
        v8 = (wchar_t *)*((_QWORD *)v8 + 16);
        ++v10;
        v6 += 312LL;
      }
      while ( v8 );
    }
  }
  return result;
}
