/*
 * XREFs of sub_1406CF970 @ 0x1406CF970
 * Callers:
 *     sub_1406CF708 @ 0x1406CF708 (sub_1406CF708.c)
 * Callees:
 *     sub_14024D9D8 @ 0x14024D9D8 (sub_14024D9D8.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_1406CFCA4 @ 0x1406CFCA4 (sub_1406CFCA4.c)
 *     sub_1406CFCE0 @ 0x1406CFCE0 (sub_1406CFCE0.c)
 *     sub_14074761C @ 0x14074761C (sub_14074761C.c)
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_140748B18 @ 0x140748B18 (sub_140748B18.c)
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_14076ACE4 @ 0x14076ACE4 (sub_14076ACE4.c)
 *     sub_14076B030 @ 0x14076B030 (sub_14076B030.c)
 *     sub_14076B554 @ 0x14076B554 (sub_14076B554.c)
 *     sub_14076C4E0 @ 0x14076C4E0 (sub_14076C4E0.c)
 *     sub_14076DC84 @ 0x14076DC84 (sub_14076DC84.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_140859598 @ 0x140859598 (sub_140859598.c)
 *     sub_14085C93C @ 0x14085C93C (sub_14085C93C.c)
 *     sub_14086358C @ 0x14086358C (sub_14086358C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406CF970(HANDLE KeyHandle, PCUNICODE_STRING SourceString, __int64 a3)
{
  int v6; // ebx
  void *v7; // rax
  void *v8; // rdx
  __int64 result; // rax
  int v10; // esi
  struct _DEVICE_OBJECT *v11; // r14
  _QWORD *v12; // rcx
  char *v13; // rbx
  int v14; // eax
  __int16 v15; // ax
  int v16; // r15d
  __int64 v17; // rdx
  PVOID v18; // r15
  int v19; // ebx
  unsigned int v20; // ebx
  void *Pool2; // rax
  void *v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rdx
  PVOID v25; // r15
  int v26; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v27; // [rsp+44h] [rbp-1Ch] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PVOID Object; // [rsp+50h] [rbp-10h] BYREF
  PVOID v30; // [rsp+58h] [rbp-8h] BYREF
  int v31; // [rsp+B0h] [rbp+50h] BYREF
  int v32; // [rsp+B8h] [rbp+58h] BYREF

  P = 0LL;
  v32 = 0;
  v27 = 0;
  v30 = 0LL;
  if ( sub_14067B838(KeyHandle, L"Phantom", 0, &P) >= 0 )
  {
    v19 = *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u ? *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) : 0;
    ExFreePoolWithTag(P, 0);
    if ( v19 )
      return 1LL;
  }
  v6 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a3 + 8) == v6 )
  {
    v20 = 8 * v6 + 1024;
    Pool2 = (void *)ExAllocatePool2(256LL, v20, 1684303952LL);
    v22 = Pool2;
    if ( !Pool2 )
    {
LABEL_66:
      v10 = -1073741670;
      goto LABEL_67;
    }
    memmove(Pool2, *(const void **)(a3 + 16), 8LL * *(unsigned int *)(a3 + 8));
    ExFreePoolWithTag(*(PVOID *)(a3 + 16), 0);
    *(_DWORD *)(a3 + 4) = v20 >> 3;
    *(_QWORD *)(a3 + 16) = v22;
  }
  v7 = (void *)sub_140779C10(SourceString, 1953261124LL);
  Object = v7;
  if ( v7 )
  {
    if ( !(unsigned __int8)sub_1406CFCA4(v7, v7) )
    {
      ObfDereferenceObject(v8);
      return 1LL;
    }
    *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v8;
LABEL_6:
    ++*(_DWORD *)(a3 + 8);
    return 1LL;
  }
  v10 = sub_140859598(&Object);
  if ( v10 < 0 )
    goto LABEL_67;
  v11 = (struct _DEVICE_OBJECT *)Object;
  v12 = Object;
  *((_DWORD *)Object + 12) |= 0x1000u;
  *(_DWORD *)(v12[39] + 32LL) |= 0x10u;
  if ( (unsigned int)sub_1406CFCE0(v12, &v30) == -1073740946 || (v13 = (char *)v30) == 0LL )
  {
    IoDeleteDevice(v11);
    goto LABEL_66;
  }
  v10 = sub_14085C93C(v30, (unsigned int)SourceString->Length + 2);
  if ( v10 >= 0 )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)(v13 + 40), SourceString);
    sub_14076FB70(v13, 17LL);
    sub_1402DE844((__int64)v13, 772);
    sub_14024D9D8((__int64)qword_140C46278, (__int64)v13);
    ObfReferenceObject(v11);
    v31 = 0;
    v26 = 4;
    v14 = sub_14077CD90(
            qword_140D00AC0,
            *((_QWORD *)v13 + 6),
            (_DWORD)KeyHandle,
            11,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v26,
            0);
    if ( v14 < 0 )
    {
      v23 = 3221226021LL;
      if ( v14 != -1073741275 )
        goto LABEL_18;
      v24 = 1LL;
    }
    else
    {
      if ( v32 == 4 && v26 == 4 )
      {
        v15 = v31;
      }
      else
      {
        v15 = 0;
        v31 = 0;
      }
      if ( (v15 & 0x20) != 0 )
      {
        v23 = 0LL;
        v24 = 18LL;
      }
      else if ( (v15 & 0x2000) != 0 )
      {
        v23 = 0LL;
        v24 = 16LL;
      }
      else
      {
        if ( (v15 & 0x40) == 0 )
        {
LABEL_18:
          if ( sub_14067B838(KeyHandle, L"NoResourceAtInitTime", 0, &P) >= 0 )
          {
            v18 = P;
            if ( *((_DWORD *)P + 1) == 4
              && *((_DWORD *)P + 3) >= 4u
              && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            {
              sub_14076FB70(v13, 256LL);
            }
            ExFreePoolWithTag(v18, 0);
          }
          sub_14076C4E0(v13);
          if ( (*((_DWORD *)v13 + 140) & 0x4000) != 0
            && ((*((_DWORD *)v13 + 99) & 0x2000) == 0 || *((_DWORD *)v13 + 101) != 1) )
          {
            sub_140764FE4(v13);
            sub_140765114(v13, 29LL, 0LL);
          }
          v16 = *((_DWORD *)v13 + 99) & 0x6000;
          if ( byte_140C097C4 )
          {
            *((_DWORD *)v13 + 176) |= 0x1000u;
            v27 = 2;
          }
          sub_14076DC84(*((_QWORD *)v13 + 6), KeyHandle);
          if ( (*((_DWORD *)v13 + 140) & 0x4000) == 0 && (v31 & 1) == 0 )
          {
            if ( v16 )
            {
              if ( dword_140D3B050 )
                sub_140747740(v13, KeyHandle, v27);
            }
            else
            {
              sub_14074761C(v13, KeyHandle);
            }
          }
          if ( ((*((_DWORD *)v13 + 99) & 0x2000) == 0 || *((_DWORD *)v13 + 101) != 22 && *((_DWORD *)v13 + 101) != 29)
            && !(unsigned int)sub_14076B030(KeyHandle, v13 + 40, 1LL) )
          {
            sub_140764FE4(v13);
            sub_140765114(v13, 22LL, 0LL);
          }
          LOBYTE(v17) = 1;
          sub_14076B554(v13 + 40, v17, v13 + 56, 0LL);
          sub_14076ACE4(*((_QWORD *)v13 + 4), v13 + 40);
          v30 = 0LL;
          if ( (int)sub_140748B18((_DWORD)v11, 0, 4, (unsigned int)&v30, (__int64)&v27) >= 0 )
          {
            v25 = v30;
            if ( v30 )
            {
              if ( (int)sub_14042A5E0(4LL, *((_QWORD *)v13 + 4)) >= 0 )
                sub_14076FB70(v13, 64LL);
              ExFreePoolWithTag(v25, 0);
            }
          }
          ObfReferenceObject(v11);
          *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v11;
          goto LABEL_6;
        }
        v23 = (unsigned int)sub_14086358C(*((_QWORD *)v13 + 6), KeyHandle);
        v24 = 28LL;
      }
    }
    sub_140765114(v13, v24, v23);
    goto LABEL_18;
  }
  IoDeleteDevice(v11);
LABEL_67:
  result = 0LL;
  *(_DWORD *)a3 = v10;
  return result;
}
