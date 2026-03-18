/*
 * XREFs of ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00D82C0
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00A7B34 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 * Callees:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C00A7C8C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVa(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        __int64 a4,
        unsigned __int64 a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        union _LARGE_INTEGER *a10,
        struct _MDL *a11)
{
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rbp
  VIDMM_GLOBAL *v13; // r11
  unsigned __int64 v14; // rdi
  LONGLONG QuadPart; // r13
  LONGLONG v16; // r12
  char *v17; // rax
  char *v18; // rbx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r14
  struct _DXGK_TRANSFERFLAGS v24; // [rsp+60h] [rbp-48h]
  unsigned int v26; // [rsp+B8h] [rbp+10h]
  struct _VIDMM_GLOBAL_ALLOC *v27; // [rsp+C0h] [rbp+18h]

  v27 = a3;
  v26 = a2;
  v11 = a5;
  v12 = 0LL;
  v13 = this;
  v14 = a4 + a5;
  if ( a7 )
    QuadPart = a7->QuadPart;
  else
    QuadPart = 0LL;
  if ( a10 )
    v16 = a10->QuadPart;
  else
    v16 = 0LL;
  v17 = (char *)a3 + 168;
  v18 = (char *)*((_QWORD *)a3 + 21);
  while ( v18 != v17 )
  {
    v19 = *((_QWORD *)v18 + 4);
    if ( v14 <= v19 )
      break;
    v20 = v19 + *((_QWORD *)v18 + 8) - *((_QWORD *)v18 + 7);
    if ( v11 < v20 )
    {
      v21 = v14;
      if ( v14 > v20 )
        v21 = v19 + *((_QWORD *)v18 + 8) - *((_QWORD *)v18 + 7);
      if ( v11 < v19 )
      {
        v22 = v19 - v11;
        VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
          v13,
          a2,
          a3,
          v22,
          v11,
          a6,
          QuadPart,
          a8,
          a9,
          v16,
          a11,
          v12,
          v24,
          0LL);
        v11 = *((_QWORD *)v18 + 4);
        v12 += v22;
        a3 = v27;
        v19 = v11;
        a2 = v26;
        v13 = this;
      }
      v23 = v21 - v11;
      VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        v13,
        a2,
        a3,
        v23,
        v19,
        a6,
        QuadPart,
        a8,
        a9,
        v16,
        a11,
        v12,
        v24,
        *((_QWORD *)v18 + 5));
      if ( v14 <= v20 )
        return;
      a3 = v27;
      v12 += v23;
      a2 = v26;
      v11 = v20;
      v13 = this;
    }
    v18 = *(char **)v18;
    v17 = (char *)a3 + 168;
  }
  VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
    v13,
    a2,
    a3,
    v14 - v11,
    v11,
    a6,
    QuadPart,
    a8,
    a9,
    v16,
    a11,
    v12,
    v24,
    0LL);
}
