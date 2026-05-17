/*
 * XREFs of RtlAddResourceAttributeAce @ 0x1800F41E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidSid @ 0x18001B310 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x18001B350 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x18001B3B0 (RtlValidAcl.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlCopySid @ 0x180069210 (RtlCopySid.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlUShortAdd @ 0x1800F1C08 (RtlUShortAdd.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800F49A0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttributeInfo @ 0x1800F5648 (RtlpValidAttributeInfo.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlAddResourceAttributeAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  int v11; // ebx
  int v12; // ecx
  int v13; // ecx
  _BYTE *v14; // rdi
  __int64 Heap; // rax
  size_t v16; // r13
  unsigned __int16 v17; // cx
  int v18; // ecx
  unsigned __int8 *v19; // rdx
  unsigned int i; // r8d
  __int64 v21; // r8
  __int64 v22; // r15
  int v23; // edx
  char v24; // al
  int v26; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int Size; // [rsp+2Ch] [rbp-DCh] BYREF
  int Size_4; // [rsp+30h] [rbp-D8h]
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  int v30; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v31; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  Size_4 = a3;
  v29 = 0LL;
  v30 = 0;
  v31 = 256;
  memset_thunk_772440563353939046(Src, 0, 0x100uLL);
  Size = 256;
  if ( !a7 )
    return (unsigned int)-1073741811;
  *a7 = 0;
  if ( !a1 )
    return (unsigned int)-1073741705;
  if ( !RtlValidSid((_BYTE *)a5) )
    return (unsigned int)-1073741704;
  v12 = *(_DWORD *)(a5 + 2) - v30;
  if ( !v12 )
    v12 = *(unsigned __int16 *)(a5 + 6) - v31;
  if ( v12 || *(_BYTE *)(a5 + 1) != 1 || *(_DWORD *)(a5 + 8) )
    return (unsigned int)-1073741811;
  if ( *a1 > 4u || a2 > 4 )
    return (unsigned int)-1073741735;
  v13 = *a1;
  if ( *a1 <= (unsigned __int8)a2 )
    v13 = (unsigned __int8)a2;
  v30 = v13;
  if ( (a3 & 0xFFFFFFE0) != 0 || a4 || !(unsigned __int8)RtlpValidAttributeInfo(a6, 0LL) || *(_DWORD *)(a6 + 4) != 1 )
    return (unsigned int)-1073741811;
  v14 = Src;
  v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), Src, &Size);
  if ( v11 == -1073741789 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, Size);
    v14 = (_BYTE *)Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), Heap, &Size);
  }
  if ( v11 >= 0 )
  {
    if ( RtlValidAcl((__int64)a1) && RtlFirstFreeAce((__int64)a1, &v29) )
    {
      v16 = Size;
      v17 = 4 * (*(unsigned __int8 *)(a5 + 1) + 4);
      LOWORD(v26) = v17;
      if ( Size > 0xFFFF || (int)RtlUShortAdd(v17, Size, (__int16 *)&v26) < 0 )
      {
        v11 = -1073741675;
      }
      else
      {
        v18 = 8;
        v19 = a1 + 8;
        *a7 = 8;
        for ( i = 0; i < *((unsigned __int16 *)a1 + 2); v19 += *((unsigned __int16 *)v19 + 1) )
        {
          ++i;
          v18 += *((unsigned __int16 *)v19 + 1);
          *a7 = v18;
        }
        v21 = (unsigned __int16)v26;
        v22 = v29;
        v23 = v18 + (unsigned __int16)v26;
        *a7 = v23;
        if ( v22 && v22 + v21 <= (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
        {
          v24 = Size_4;
          *(_WORD *)(v22 + 2) = v21;
          *(_BYTE *)(v22 + 1) = v24;
          *(_BYTE *)v22 = 18;
          *(_DWORD *)(v22 + 4) = 0;
          RtlCopySid(4 * *(unsigned __int8 *)(a5 + 1) + 8, (void *)(v22 + 8), (unsigned __int8 *)a5);
          memmove((void *)(v22 + 16 + 4LL * *(unsigned __int8 *)(a5 + 1)), v14, v16);
          ++*((_WORD *)a1 + 2);
          *a1 = v30;
        }
        else
        {
          v11 = -1073741671;
          *a7 = (v23 + 3) & 0xFFFFFFFC;
        }
      }
    }
    else
    {
      v11 = -1073741705;
    }
  }
  if ( v14 && v14 != Src )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v14);
  return (unsigned int)v11;
}
