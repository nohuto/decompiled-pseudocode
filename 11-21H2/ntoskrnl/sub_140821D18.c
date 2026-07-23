/*
 * XREFs of sub_140821D18 @ 0x140821D18
 * Callers:
 *     sub_1405611AC @ 0x1405611AC (sub_1405611AC.c)
 *     sub_140748758 @ 0x140748758 (sub_140748758.c)
 *     sub_140820308 @ 0x140820308 (sub_140820308.c)
 *     sub_14083C0F4 @ 0x14083C0F4 (sub_14083C0F4.c)
 *     sub_140945128 @ 0x140945128 (sub_140945128.c)
 *     sub_140958F84 @ 0x140958F84 (sub_140958F84.c)
 *     sub_14095F29C @ 0x14095F29C (sub_14095F29C.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x140388BD0 (RtlCmDecodeMemIoResource.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_DWORD *__fastcall sub_140821D18(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r9d
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v4; // r14
  ULONG LowPart; // r13d
  int v8; // ebx
  _DWORD *v9; // rcx
  __int64 v10; // r10
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 Pool2; // rax
  _DWORD *v16; // rsi
  int v17; // ebp
  int v18; // ecx
  __int64 v19; // rbx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v20; // rdi
  ULONG v21; // r15d
  LONG HighPart; // eax
  _DWORD *result; // rax
  ULONGLONG v24; // rax
  ULONGLONG v25; // rcx
  KAFFINITY Affinity; // rax
  int v27; // eax
  int MessageCount; // eax
  ULONGLONG Start; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a2;
  v4 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(a2 + 1);
  LowPart = 0;
  v8 = 0;
  v9 = a2 + 1;
  if ( !*a2 )
    return 0LL;
  v10 = v3;
  do
  {
    v11 = v9[3];
    v9 += 4;
    v8 += v11;
    if ( v11 )
    {
      v12 = v11;
      do
      {
        v13 = 0LL;
        if ( *(_BYTE *)v9 == 5 )
        {
          v13 = (unsigned int)v9[1];
          --v8;
        }
        v9 = (_DWORD *)((char *)v9 + v13 + 20);
        --v12;
      }
      while ( v12 );
    }
    --v10;
  }
  while ( v10 );
  if ( !v8 )
    return 0LL;
  v14 = v3 + v8;
  Pool2 = ExAllocatePool2(256LL, 32LL * v14 + 72, 1970499664LL);
  v16 = (_DWORD *)Pool2;
  if ( !Pool2 )
    return 0LL;
  v17 = 0;
  *(_DWORD *)(Pool2 + 4) = *(_DWORD *)&v4->Type;
  v18 = a2[2];
  *(_DWORD *)(Pool2 + 36) = v14;
  v19 = Pool2 + 72;
  *(_DWORD *)(Pool2 + 8) = v18;
  *(_QWORD *)(Pool2 + 12) = 0LL;
  *(_QWORD *)(Pool2 + 20) = 0LL;
  *(_DWORD *)(Pool2 + 28) = 1;
  *(_DWORD *)(Pool2 + 32) = 65537;
  *(_WORD *)(Pool2 + 40) = -32767;
  *(_DWORD *)(Pool2 + 42) = 3;
  *(_WORD *)(Pool2 + 46) = 0;
  *(_DWORD *)(Pool2 + 48) = a3;
  if ( *a2 )
  {
    while ( 1 )
    {
      if ( v17 )
      {
        *(_DWORD *)(v19 + 2) = 0;
        *(_WORD *)v19 = -4095;
        *(_WORD *)(v19 + 6) = 0;
        v27 = *(_DWORD *)&v4->Type;
        if ( *(_DWORD *)&v4->Type == -1 )
          v27 = 1;
        *(_DWORD *)(v19 + 8) = v27;
        *(_QWORD *)(v19 + 12) = v4->u.Generic.Start.LowPart;
        v19 += 32LL;
      }
      v20 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v4->u.Memory48 + 1);
      v21 = 0;
      if ( v4->u.Generic.Length )
        break;
LABEL_21:
      v4 = v20;
      if ( (unsigned int)++v17 >= *a2 )
        goto LABEL_22;
    }
    while ( 1 )
    {
      *(_BYTE *)v19 = 1;
      *(_BYTE *)(v19 + 1) = v20->Type;
      *(_BYTE *)(v19 + 2) = v20->ShareDisposition;
      *(_WORD *)(v19 + 4) = v20->Flags;
      *(_BYTE *)(v19 + 3) = 0;
      *(_WORD *)(v19 + 6) = 0;
      switch ( v20->Type )
      {
        case 1u:
          goto LABEL_24;
        case 2u:
          if ( (v20->Flags & 2) != 0 )
          {
            *(_DWORD *)(v19 + 12) = -2;
            MessageCount = v20->u.MessageInterrupt.Raw.MessageCount;
            *(_DWORD *)(v19 + 20) = 0;
            *(_DWORD *)(v19 + 8) = ~MessageCount;
            *(_WORD *)(v19 + 16) = 4;
            *(_WORD *)(v19 + 18) = v20->u.MessageInterrupt.Raw.Reserved;
            Affinity = v20->u.Interrupt.Affinity;
            goto LABEL_25;
          }
          HighPart = v20->u.Generic.Start.HighPart;
          *(_DWORD *)(v19 + 12) = HighPart;
          break;
        case 3u:
          goto LABEL_24;
        case 4u:
          if ( SLOBYTE(v20->Flags) < 0 )
          {
            *(_DWORD *)(v19 + 8) = v20->u.Generic.Start.HighPart;
            *(_DWORD *)(v19 + 12) = v20->u.Generic.Start.HighPart;
            *(_DWORD *)(v19 + 16) = v20->u.Generic.Start.LowPart;
            *(_DWORD *)(v19 + 20) = v20->u.DmaV3.TransferWidth;
          }
          else
          {
            *(_DWORD *)(v19 + 8) = v20->u.Generic.Start.LowPart;
            *(_DWORD *)(v19 + 12) = v20->u.Generic.Start.LowPart;
          }
          goto LABEL_19;
        case 5u:
          LowPart = v20->u.Generic.Start.LowPart;
          goto LABEL_20;
        case 6u:
          *(_DWORD *)(v19 + 12) = v20->u.Generic.Start.LowPart;
          *(_DWORD *)(v19 + 16) = v20->u.Generic.Start.LowPart - 1 + v20->u.Generic.Start.HighPart;
          HighPart = v20->u.Generic.Start.HighPart;
          break;
        case 7u:
LABEL_24:
          Start = 0LL;
          v24 = RtlCmDecodeMemIoResource(v20, &Start);
          *(_DWORD *)(v19 + 8) = v20->u.Generic.Length;
          v25 = Start;
          *(_QWORD *)(v19 + 16) = Start;
          Affinity = v25 + v24 - 1;
          *(_DWORD *)(v19 + 12) = 1;
LABEL_25:
          *(_QWORD *)(v19 + 24) = Affinity;
          goto LABEL_19;
        default:
          *(_DWORD *)(v19 + 8) = v20->u.Generic.Start.LowPart;
          *(_DWORD *)(v19 + 12) = v20->u.Generic.Start.HighPart;
          *(_DWORD *)(v19 + 16) = v20->u.Generic.Length;
          goto LABEL_19;
      }
      *(_DWORD *)(v19 + 8) = HighPart;
LABEL_19:
      v19 += 32LL;
LABEL_20:
      v20 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)v20 + LowPart + 20);
      ++v21;
      LowPart = 0;
      if ( v21 >= v4->u.Generic.Length )
        goto LABEL_21;
    }
  }
LABEL_22:
  result = v16;
  *v16 = v19 - (_DWORD)v16;
  return result;
}
