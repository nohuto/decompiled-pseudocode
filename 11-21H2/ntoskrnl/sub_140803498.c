/*
 * XREFs of sub_140803498 @ 0x140803498
 * Callers:
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_1408038B4 @ 0x1408038B4 (sub_1408038B4.c)
 *     sub_140A1D3CC @ 0x140A1D3CC (sub_140A1D3CC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140803498(
        unsigned int a1,
        _BYTE *a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int *a6)
{
  size_t v6; // r14
  char v8; // di
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // ebx
  _BYTE *Buffer; // rsi
  int v17; // eax
  int v18; // edi
  unsigned int *v19; // r14
  _OWORD *v20; // rax
  _WORD *v22; // rcx
  unsigned int v23; // eax
  _BYTE *PoolWithTag; // rax
  _BYTE *v25; // rax
  unsigned int v26; // r14d
  int v27; // r12d
  int v28; // ebx
  unsigned int v29; // r12d
  _BYTE *v30; // rax
  _WORD *v31; // r13
  unsigned int v32; // eax
  size_t v33; // rbx
  void *Src; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  unsigned int v36; // [rsp+70h] [rbp+30h]

  v6 = a3;
  Src = 0LL;
  v8 = 0;
  DestinationString = 0LL;
  v9 = (HIBYTE(a1) & 0xF) - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      if ( (a3 & 1) != 0 )
        return (unsigned int)-1073741788;
      v22 = a2;
      v23 = a3 >> 1;
      if ( a3 >> 1 )
      {
        while ( *v22 )
        {
          ++v22;
          if ( !--v23 )
            goto LABEL_53;
        }
        v8 = 1;
        v15 = a3;
      }
      else
      {
LABEL_53:
        if ( a3 + 2 < a3 )
          return (unsigned int)-1073741675;
        v15 = a3 + 2;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x4B444342u);
      Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, a2, v6);
        if ( !v8 )
          *(_WORD *)&Buffer[v15 - 2] = 0;
        goto LABEL_18;
      }
      goto LABEL_38;
    }
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( !v14 )
          {
            if ( a3 - 1 <= 1 )
            {
              v15 = 1;
              Buffer = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x4B444342u);
              if ( Buffer )
              {
                *Buffer = *a2 != 0;
LABEL_18:
                v18 = 0;
                *a5 = Buffer;
                *a6 = v15;
                goto LABEL_19;
              }
              goto LABEL_38;
            }
            return (unsigned int)-1073741788;
          }
          if ( v14 == 1 && (a3 & 7) != 0 )
            return (unsigned int)-1073741788;
          v15 = a3;
          v25 = ExAllocatePoolWithTag(PagedPool, a3, 0x4B444342u);
          Buffer = v25;
          if ( v25 )
          {
            memmove(v25, a2, v6);
            goto LABEL_18;
          }
        }
        else
        {
          v15 = 8;
          if ( a3 != 8 )
            return (unsigned int)-1073741788;
          Buffer = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x4B444342u);
          if ( Buffer )
          {
            *(_QWORD *)Buffer = *(_QWORD *)a2;
            goto LABEL_18;
          }
        }
      }
      else
      {
        if ( (a3 & 0xF) != 0 )
          return (unsigned int)-1073741788;
        v26 = a3 >> 4;
        v27 = 0;
        v28 = 0;
        if ( a3 >> 4 )
        {
          do
          {
            RtlInitUnicodeString(&DestinationString, 0LL);
            v18 = sub_1407454A8((unsigned int *)&a2[16 * v28], (__int64)&DestinationString, 1);
            if ( v18 < 0 )
              goto LABEL_19;
            v27 += DestinationString.Length + 2;
            RtlFreeUnicodeString(&DestinationString);
          }
          while ( ++v28 < v26 );
        }
        v29 = v27 + 2;
        v30 = ExAllocatePoolWithTag(PagedPool, v29, 0x4B444342u);
        Buffer = v30;
        if ( v30 )
        {
          v31 = v30;
          v36 = 0;
          v32 = 0;
          if ( v26 )
          {
            while ( 1 )
            {
              v18 = sub_1407454A8((unsigned int *)&a2[16 * v32], (__int64)&DestinationString, 1);
              if ( v18 < 0 )
                break;
              v33 = (unsigned int)DestinationString.Length + 2;
              memmove(v31, DestinationString.Buffer, v33);
              v31 = (_WORD *)((char *)v31 + v33);
              RtlFreeUnicodeString(&DestinationString);
              v32 = v36 + 1;
              v36 = v32;
              if ( v32 >= v26 )
                goto LABEL_17;
            }
            ExFreePoolWithTag(Buffer, 0x4B444342u);
            goto LABEL_19;
          }
LABEL_17:
          *v31 = 0;
          v15 = v29;
          goto LABEL_18;
        }
      }
LABEL_38:
      v18 = -1073741801;
      goto LABEL_19;
    }
    if ( a3 != 16 )
      return (unsigned int)-1073741788;
    v18 = sub_1407454A8((unsigned int *)a2, (__int64)&DestinationString, 1);
    if ( v18 >= 0 )
    {
      Buffer = DestinationString.Buffer;
      v15 = DestinationString.Length + 2;
      goto LABEL_18;
    }
  }
  else
  {
    if ( *(_DWORD *)a2 == 6 )
      v17 = sub_140A1D3CC(a2, a3, &Src);
    else
      v17 = sub_1408038B4(a2, a3, a4, &Src);
    v18 = v17;
    if ( v17 < 0 )
      goto LABEL_19;
    v19 = (unsigned int *)Src;
    v15 = *((_DWORD *)Src + 2) + 16;
    if ( *((_DWORD *)Src + 2) < 0xFFFFFFF0 )
    {
      v20 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(*((_DWORD *)Src + 2) + 16), 0x4B444342u);
      Buffer = v20;
      if ( v20 )
      {
        *v20 = *(_OWORD *)(a2 + 4);
        memmove(v20 + 1, v19, v19[2]);
        if ( Src )
        {
          ExFreePoolWithTag(Src, 0x4B444342u);
          Src = 0LL;
        }
        goto LABEL_18;
      }
      goto LABEL_38;
    }
    v18 = -1073741811;
  }
LABEL_19:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
  return (unsigned int)v18;
}
