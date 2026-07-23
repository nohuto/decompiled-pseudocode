/*
 * XREFs of sub_1406619F8 @ 0x1406619F8
 * Callers:
 *     sub_1406E32E4 @ 0x1406E32E4 (sub_1406E32E4.c)
 *     sub_140763800 @ 0x140763800 (sub_140763800.c)
 *     sub_140767040 @ 0x140767040 (sub_140767040.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     IoInvalidateDeviceRelations @ 0x1402DCE90 (IoInvalidateDeviceRelations.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     sub_14056370C @ 0x14056370C (sub_14056370C.c)
 *     sub_140564074 @ 0x140564074 (sub_140564074.c)
 *     sub_140661C18 @ 0x140661C18 (sub_140661C18.c)
 *     sub_140661CD8 @ 0x140661CD8 (sub_140661CD8.c)
 *     sub_1407635A4 @ 0x1407635A4 (sub_1407635A4.c)
 *     sub_1407645E0 @ 0x1407645E0 (sub_1407645E0.c)
 *     sub_140764970 @ 0x140764970 (sub_140764970.c)
 *     sub_140779620 @ 0x140779620 (sub_140779620.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_14095336C @ 0x14095336C (sub_14095336C.c)
 *     sub_140953950 @ 0x140953950 (sub_140953950.c)
 *     sub_140953AB8 @ 0x140953AB8 (sub_140953AB8.c)
 *     sub_140953CF8 @ 0x140953CF8 (sub_140953CF8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406619F8(__int64 a1, char a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rax
  const wchar_t *v5; // r10
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // r11d
  const wchar_t *v11; // rdx
  const wchar_t *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  const wchar_t **v15; // r9
  unsigned int *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int *v19; // rdx
  void *v20; // rcx
  unsigned int *v21; // r9
  __int64 v22; // rdx
  int v23; // edx
  struct _DEVICE_OBJECT *v24; // rax
  struct _DEVICE_OBJECT *v25; // rbx
  __int64 v26; // rcx
  unsigned int *Buffer; // [rsp+60h] [rbp+10h] BYREF

  v2 = *(__int64 **)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 312);
  v5 = 0LL;
  v7 = *v2;
  Buffer = (unsigned int *)*v2;
  v8 = *(_QWORD *)(v4 + 40);
  if ( v8 )
    v5 = *(const wchar_t **)(v8 + 48);
  if ( (byte_140C0DD4C & 2) != 0 )
  {
    if ( v7 )
    {
      v10 = *(_DWORD *)(v7 + 4);
      v11 = *(const wchar_t **)(v7 + 16);
      v12 = *(const wchar_t **)(v7 + 8);
    }
    else
    {
      v12 = &word_140867F00;
      LOBYTE(v10) = 0;
      v11 = &word_140867F00;
    }
    sub_140564074(v8, (__int64)v11, v7, v12, v11, v5, a2, v10, *((_DWORD *)v2 + 2));
  }
  result = *((unsigned int *)v2 + 2);
  if ( (result & 0x20) == 0 )
  {
    if ( (result & 1) != 0 )
    {
      *((_DWORD *)v2 + 2) = result & 0xFFFFFFFE;
      result = sub_1407635A4(Buffer, 0LL);
    }
    if ( !a2 )
    {
      sub_140953950(a1);
      if ( (v2[1] & 0x48) != 8 )
        sub_140953CF8(a1);
      result = Buffer[1];
      if ( (result & 2) != 0 )
      {
        result = sub_14095336C(Buffer);
        v15 = (const wchar_t **)Buffer;
        if ( *((_QWORD *)Buffer + 11) )
        {
          Buffer[1] &= ~4u;
          sub_140661CD8(Buffer + 6);
          v16 = Buffer;
          v17 = *((_QWORD *)Buffer + 11);
          *(_OWORD *)(Buffer + 6) = *(_OWORD *)(v17 + 8);
          *(_OWORD *)(v16 + 10) = *(_OWORD *)(v17 + 24);
          *(_OWORD *)(v16 + 14) = *(_OWORD *)(v17 + 40);
          v18 = *((_QWORD *)Buffer + 11);
          *(_OWORD *)(v18 + 8) = 0LL;
          *(_OWORD *)(v18 + 24) = 0LL;
          *(_OWORD *)(v18 + 40) = 0LL;
          v19 = Buffer;
          v20 = (void *)*((_QWORD *)Buffer + 19);
          if ( v20 )
          {
            ExFreePoolWithTag(v20, 0x57706E50u);
            v19 = Buffer;
          }
          v19[40] = *(_DWORD *)(*((_QWORD *)v19 + 11) + 64LL);
          *((_QWORD *)Buffer + 19) = *(_QWORD *)(*((_QWORD *)Buffer + 11) + 56LL);
          *(_DWORD *)(*((_QWORD *)Buffer + 11) + 64LL) = 0;
          *(_QWORD *)(*((_QWORD *)Buffer + 11) + 56LL) = 0LL;
          v21 = Buffer;
          v22 = *((_QWORD *)Buffer + 21);
          if ( v22 )
          {
            sub_140779620(Buffer[44], v22, 1466986064LL);
            v21 = Buffer;
          }
          v21[44] = *(_DWORD *)(*((_QWORD *)v21 + 11) + 80LL);
          *((_QWORD *)Buffer + 21) = *(_QWORD *)(*((_QWORD *)Buffer + 11) + 72LL);
          *(_DWORD *)(*((_QWORD *)Buffer + 11) + 80LL) = 0;
          *(_QWORD *)(*((_QWORD *)Buffer + 11) + 72LL) = 0LL;
          Buffer[41] = *(_DWORD *)(*((_QWORD *)Buffer + 11) + 68LL);
          sub_1407645E0(Buffer + 46);
          v23 = sub_140764970(**((_QWORD **)Buffer + 11));
          if ( v23 < 0 )
          {
            v26 = *((_QWORD *)Buffer + 18);
            if ( v26 && _InterlockedExchange64((volatile __int64 *)(v26 + 104), 0LL) )
            {
              *(_QWORD *)(*((_QWORD *)Buffer + 18) + 56LL) = 0LL;
              *(_DWORD *)(*((_QWORD *)Buffer + 18) + 48LL) = v23;
              IofCompleteRequest(*((PIRP *)Buffer + 18), 0);
              *((_QWORD *)Buffer + 18) = 0LL;
            }
          }
          else
          {
            Buffer[1] &= ~2u;
            v24 = (struct _DEVICE_OBJECT *)sub_140779C10(*((_QWORD *)Buffer + 14), 1953261124LL);
            v25 = v24;
            if ( v24 )
            {
              IoInvalidateDeviceRelations(v24, SingleBusRelations);
              ObfDereferenceObject(v25);
            }
          }
          sub_140953AB8(*((PVOID *)Buffer + 11));
          result = (__int64)Buffer;
          *((_QWORD *)Buffer + 11) = 0LL;
          v15 = (const wchar_t **)Buffer;
        }
        if ( !v15[14] )
        {
          if ( (byte_140C0DD4C & 2) != 0 )
            sub_14056370C(v13, (const EVENT_DESCRIPTOR *)qword_14003B450, v14, v15[1], v15[2]);
          RtlDeleteElementGenericTableAvl(&stru_140C447A0, &Buffer);
          return sub_140661C18(Buffer);
        }
      }
    }
  }
  return result;
}
