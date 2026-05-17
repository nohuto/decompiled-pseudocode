/*
 * XREFs of LdrpFindLoadedDllByMappingLockHeld @ 0x18002CD54
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18002C97C (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByMapping @ 0x18002DDCC (LdrpFindLoadedDllByMapping.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 *     memcmp @ 0x180092B10 (memcmp.c)
 *     ZwAreMappedFilesTheSame @ 0x18009FFA0 (ZwAreMappedFilesTheSame.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMappingLockHeld(
        __int64 a1,
        const void *a2,
        unsigned int *a3,
        volatile signed __int32 **a4)
{
  unsigned __int64 v5; // rax
  _QWORD *i; // rbx
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  unsigned __int64 v12; // rcx
  volatile signed __int32 *v14; // rdi
  __int64 v15; // rax
  _QWORD **v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // eax
  void *Buf2; // [rsp+20h] [rbp-28h] BYREF

  v5 = LdrpMappingInfoIndex;
  if ( (qword_180185020 & 1) != 0 && LdrpMappingInfoIndex )
    v5 = (unsigned __int64)&LdrpMappingInfoIndex ^ LdrpMappingInfoIndex;
  i = 0LL;
  if ( v5 )
  {
    v10 = *a3;
    while ( 1 )
    {
      if ( v10 < *(_DWORD *)(v5 - 96) )
        goto LABEL_11;
      if ( v10 <= *(_DWORD *)(v5 - 96) )
      {
        v11 = *(_DWORD *)(v5 - 160);
        if ( a3[1] < v11 )
          goto LABEL_11;
        if ( a3[1] <= v11 )
          break;
      }
      v12 = *(_QWORD *)(v5 + 8);
LABEL_12:
      if ( (qword_180185020 & 1) != 0 && v12 )
        v5 ^= v12;
      else
        v5 = v12;
      if ( !v5 )
        goto LABEL_15;
    }
    i = (_QWORD *)v5;
LABEL_11:
    v12 = *(_QWORD *)v5;
    goto LABEL_12;
  }
LABEL_15:
  if ( i )
  {
    while ( 1 )
    {
      v14 = (volatile signed __int32 *)(i - 28);
      if ( (int)RtlImageNtHeaderEx(3, *(i - 22), 0LL, &Buf2) >= 0
        && !memcmp(a2, Buf2, 0x30uLL)
        && (int)ZwAreMappedFilesTheSame(*((_QWORD *)v14 + 6), a1) >= 0 )
      {
        break;
      }
      v16 = (_QWORD **)i[1];
      v17 = i;
      if ( v16 )
      {
        v18 = *v16;
        for ( i = (_QWORD *)i[1]; v18; v18 = (_QWORD *)*v18 )
          i = v18;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v17 )
            break;
          v17 = i;
        }
      }
      if ( !i )
        return i == 0LL ? 0xC0000135 : 0;
      v19 = *((_DWORD *)i - 24);
      if ( *a3 >= v19 && *a3 <= v19 )
      {
        v20 = *((_DWORD *)i - 40);
        if ( a3[1] >= v20 && a3[1] <= v20 )
          continue;
      }
      i = 0LL;
      return i == 0LL ? 0xC0000135 : 0;
    }
    v15 = *((_QWORD *)v14 + 19);
    if ( *(_DWORD *)(v15 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v15 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement(v14 + 69);
    *a4 = v14;
  }
  return i == 0LL ? 0xC0000135 : 0;
}
