/*
 * XREFs of sub_14079AE04 @ 0x14079AE04
 * Callers:
 *     sub_14020A620 @ 0x14020A620 (sub_14020A620.c)
 *     sub_140689424 @ 0x140689424 (sub_140689424.c)
 *     sub_14068F1F8 @ 0x14068F1F8 (sub_14068F1F8.c)
 * Callees:
 *     sub_1402E2A74 @ 0x1402E2A74 (sub_1402E2A74.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14079B740 @ 0x14079B740 (sub_14079B740.c)
 *     sub_1407C9904 @ 0x1407C9904 (sub_1407C9904.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AB44A4 @ 0x140AB44A4 (sub_140AB44A4.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 *     sub_140AB451C @ 0x140AB451C (sub_140AB451C.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

char __fastcall sub_14079AE04(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        char a7)
{
  char *PoolWithTag; // rdi
  __int64 v10; // r10
  unsigned int *v11; // r11
  unsigned int v12; // r12d
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  char *v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // r8d
  unsigned int v21; // r15d
  unsigned int v22; // r12d
  unsigned int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  const void *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // r9
  _WORD v34[2]; // [rsp+30h] [rbp-20h] BYREF
  _WORD v35[2]; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v36; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v37; // [rsp+3Ch] [rbp-14h] BYREF
  unsigned int v38; // [rsp+40h] [rbp-10h]
  unsigned int v39; // [rsp+44h] [rbp-Ch]

  PoolWithTag = 0LL;
  v37 = 0;
  v35[0] = 0;
  v36 = 0;
  v34[0] = 0;
  sub_140AB4534(v35);
  sub_140AB4534(v34);
  if ( !sub_1402E2A74(v10, v11, &v36, &v37) )
    return 0;
  v12 = v36;
  v13 = v36 << 9;
  v39 = v36;
  v14 = (v37 << 9) - (v36 << 9);
  v38 = v37 << 9;
  if ( !a7 || (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v14, 0x33354D43u)) != 0LL )
  {
    v15 = sub_140AB44C0(BugCheckParameter2, v13);
    if ( !v15 )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v13, 0x128AuLL);
    if ( sub_14079B740(v15) )
    {
      v32 = sub_140AB451C(v16, v16, v34);
      v17 = v13 - *(_DWORD *)(v33 + 20) + v32;
    }
    else
    {
      v17 = sub_1407C9904(BugCheckParameter2, v16, v34);
    }
    if ( a7 )
      v18 = PoolWithTag;
    else
      v18 = (char *)(v17 + (v13 & 0xFFF));
    *a4 = v18;
    v19 = v12 & 7;
    v20 = v37 - v12;
    v21 = v37 - v12;
    v36 = v37 - v12;
    *a6 = v13 + 4096;
    if ( v20 >= 8 - (int)v19 )
      v21 = 8 - v19;
    v22 = v21 << 9;
    if ( a7 )
    {
      memmove(PoolWithTag, (const void *)(v17 + (unsigned int)((_DWORD)v19 << 9)), v22);
      v20 = v36;
      PoolWithTag += v22;
    }
    if ( v20 > v21 )
    {
      v24 = (v13 + 4096) & 0xFFFFF000;
      while ( v22 < v14 )
      {
        v25 = sub_140AB44C0(BugCheckParameter2, v24);
        v19 = v25;
        if ( !v25 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v24, 0x12F4uLL);
        if ( !a7 && (*(_BYTE *)(v25 + 8) & 1) != 0 )
          break;
        if ( sub_14079B740(v25) )
        {
          v30 = sub_140AB451C(v27, v26, v35);
          v28 = (const void *)(v30 + v24 - *(_DWORD *)(v31 + 20));
        }
        else
        {
          v28 = (const void *)sub_1407C9904(BugCheckParameter2, v26, v35);
        }
        if ( v38 - v24 <= 0x1000 )
        {
          if ( a7 )
            memmove(PoolWithTag, v28, v38 - v24);
          *a5 = v14;
          sub_140AB44A4(v29, v28, v35);
          goto LABEL_14;
        }
        if ( a7 )
        {
          memmove(PoolWithTag, v28, 0x1000uLL);
          PoolWithTag += 4096;
        }
        v22 += 4096;
        v21 += 8;
        v24 += 4096;
        sub_140AB44A4(v29, v28, v35);
      }
      *a5 = v22;
      if ( v21 + v39 != v37 )
      {
        v17 = (__int64)a3;
        *a3 = v21 + v39;
      }
    }
    else
    {
      *a5 = v14;
    }
LABEL_14:
    sub_140AB44A4(v17, v19, v34);
  }
  else
  {
    *a4 = 0LL;
  }
  return 1;
}
