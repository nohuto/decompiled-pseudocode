/*
 * XREFs of ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1C0210798
 * Callers:
 *     ?AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z @ 0x1C021071C (-AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C030A574 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E8B48 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1C01EA048 (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 *     ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x1C030A3B8 (-FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z.c)
 */

struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *__fastcall DXGADAPTERSOURCEHASH::AddEntry(
        DXGADAPTERSOURCEHASH *this,
        const struct _LUID *a2,
        int a3,
        __int64 a4)
{
  char v4; // r14
  _DWORD *Buffer; // rax
  unsigned int v9; // esi
  __int64 v10; // r9
  unsigned int v11; // ebp
  __int64 v12; // rax
  char *v13; // rbx
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *Entry; // rbx
  int v15; // ecx
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *result; // rax

  v4 = a4;
  if ( !*(_QWORD *)((char *)this + 60) )
  {
    Buffer = AUTOEXPANDALLOCATION::GetBuffer((const void **)this + 6, 0x80u, 0, a4);
    if ( !Buffer )
      return 0LL;
    Buffer[1] = -1;
    *Buffer = -1;
    Buffer[2] = -1;
    Buffer[3] = Buffer[3] & 0xFFFFFFFC | 1;
    *((_DWORD *)this + 16) = 1;
    memset(Buffer + 4, 0, 0x70uLL);
  }
  v9 = (unsigned int)AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 48)) >> 4;
  v11 = 1 << *((_DWORD *)this + 17);
  if ( v9 > v11 )
  {
    v9 = 1 << *((_DWORD *)this + 17);
  }
  else if ( v9 != v11 )
  {
    v12 = *((unsigned int *)this + 16);
    if ( (_DWORD)v12 == v9 )
    {
      if ( v9 + 8 < v11 )
        v11 = v9 + 8;
      v13 = (char *)AUTOEXPANDALLOCATION::GetBuffer((const void **)this + 6, 16 * v11, 1, v10);
      memset(&v13[16 * v9 + 16], 0, 16LL * (v11 - v9 - 1));
      v12 = *((unsigned int *)this + 16);
    }
    else
    {
      v13 = (char *)*((_QWORD *)this + 6);
    }
    Entry = (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)&v13[16 * v12];
    goto LABEL_9;
  }
  Entry = DXGADAPTERSOURCEHASH::FindEntry(this, *((_DWORD *)this + 16) % v9, 0, 0LL, 0LL);
  if ( Entry )
  {
LABEL_9:
    *((_DWORD *)Entry + 3) |= 1u;
    v15 = *((_DWORD *)Entry + 3);
    *(struct _LUID *)Entry = *a2;
    *((_DWORD *)Entry + 2) = a3;
    *((_DWORD *)Entry + 3) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(2 * v4)) & 2;
    result = Entry;
    ++*((_DWORD *)this + 16);
    return result;
  }
  return 0LL;
}
