/*
 * XREFs of sub_140256F58 @ 0x140256F58
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     FsRtlOplockBreakToNoneEx @ 0x140542200 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlCheckUpperOplock @ 0x14092E2F0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     sub_140240DB4 @ 0x140240DB4 (sub_140240DB4.c)
 *     sub_140249470 @ 0x140249470 (sub_140249470.c)
 *     sub_14024A390 @ 0x14024A390 (sub_14024A390.c)
 *     sub_14024C370 @ 0x14024C370 (sub_14024C370.c)
 *     sub_14024E884 @ 0x14024E884 (sub_14024E884.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     sub_1402A6AB0 @ 0x1402A6AB0 (sub_1402A6AB0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_140542AEC @ 0x140542AEC (sub_140542AEC.c)
 */

__int64 __fastcall sub_140256F58(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        _BYTE *a12,
        _BYTE *a13)
{
  __int64 v14; // r12
  unsigned int v17; // ebx
  int v18; // ecx
  __int64 v19; // r14
  __int64 v20; // rax
  _QWORD *v21; // rcx
  unsigned int v22; // ecx
  _QWORD *i; // rsi
  int v24; // ecx
  int v25; // ecx
  __int128 v27; // [rsp+60h] [rbp-38h] BYREF
  __int64 v28; // [rsp+70h] [rbp-28h]

  v14 = a3;
  v27 = 0LL;
  v28 = 0LL;
  v17 = 0;
  if ( !a1 )
    return v17;
  v18 = *(_DWORD *)(a1 + 144);
  if ( v18 == 1 || (v18 & 0x6000) != 0 )
    return v17;
  if ( (v18 & 0x1F00F90) == 0 )
  {
    v19 = *(_QWORD *)a1;
    if ( (v18 & 0x1000) != 0 )
      return v17;
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    *(_BYTE *)(v19 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v19 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v19 + 69));
    if ( *(_BYTE *)(v19 + 68) )
    {
      *(_QWORD *)(v19 + 56) = 8LL;
      sub_14024A390(a1, 0LL, 0LL);
      sub_140240DB4(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
      v20 = *(_QWORD *)a1;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
      {
        *(_QWORD *)(v20 + 56) = 0LL;
        v20 = *(_QWORD *)a1;
      }
      *(_DWORD *)(v20 + 48) = -1073741536;
      IofCompleteRequest(*(PIRP *)a1, 1);
      *(_QWORD *)a1 = 0LL;
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
      while ( 1 )
      {
        v21 = *(_QWORD **)(a1 + 88);
        if ( v21 == (_QWORD *)(a1 + 88) )
          break;
        sub_14024E884(v21);
      }
      return v17;
    }
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 8LL;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
    IofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 144) |= 0x200u;
    goto LABEL_14;
  }
  if ( (((v18 & 0x1F0FFDF) - 16) & 0xFFFFEFFF) != 0 )
  {
    if ( (v18 & 0x100) != 0 )
    {
      if ( (a4 & 0x10010000) != 0 )
        return (unsigned int)-1073739511;
      v22 = v18 & 0xFFFFFEFF;
      *(_DWORD *)(a1 + 144) = v22;
      *(_DWORD *)(a1 + 144) = v22 | 0x400;
      goto LABEL_14;
    }
    if ( (v18 & 0x80u) == 0 )
    {
LABEL_14:
      if ( (a4 & 8) == 0 && (unsigned __int8)sub_1402A6AB0(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), 0LL) )
        return v17;
      if ( (a4 & 1) != 0 )
        return 264;
      if ( (a4 & 0x10010000) == 0 )
      {
        LOBYTE(a3) = 1;
        sub_14024A390(a1, 0LL, a3);
        sub_14024C370(a1, 0LL);
        *a12 = 0;
        return (unsigned int)sub_140249470(a1, v14, a6, a7, a8, (char *)&v27, 0, a9, a10, a11, a13);
      }
      return (unsigned int)-1073739511;
    }
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    *(_DWORD *)(a1 + 144) = v18 & 0x20 | 1;
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( *(_QWORD *)(a1 + 24) )
    {
      sub_140240DB4(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
    }
  }
  else
  {
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    for ( i = *(_QWORD **)(a1 + 40); i != (_QWORD *)(a1 + 40); i = (_QWORD *)*i )
    {
      if ( *(_DWORD *)(i[2] + 24LL) != 590400 )
      {
        i = (_QWORD *)i[1];
        sub_140542AEC(*i, 0LL, 0LL);
      }
    }
    v24 = *(_DWORD *)(a1 + 144) & 0x20;
    if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) == 0x1010 )
      v25 = v24 | 0x1000;
    else
      v25 = v24 | 1;
    *(_DWORD *)(a1 + 144) = v25;
  }
  return v17;
}
