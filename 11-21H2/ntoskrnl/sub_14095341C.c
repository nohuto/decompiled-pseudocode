/*
 * XREFs of sub_14095341C @ 0x14095341C
 * Callers:
 *     sub_140766F84 @ 0x140766F84 (sub_140766F84.c)
 *     sub_140811C50 @ 0x140811C50 (sub_140811C50.c)
 *     sub_140953700 @ 0x140953700 (sub_140953700.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoInvalidateDeviceRelations @ 0x1402DCE90 (IoInvalidateDeviceRelations.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     sub_14056370C @ 0x14056370C (sub_14056370C.c)
 *     sub_140661C18 @ 0x140661C18 (sub_140661C18.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_14095336C @ 0x14095336C (sub_14095336C.c)
 *     sub_140953AB8 @ 0x140953AB8 (sub_140953AB8.c)
 */

void __fastcall sub_14095341C(__int64 a1, __int64 a2, __int64 a3)
{
  struct _DEVICE_OBJECT *v3; // rax
  struct _DEVICE_OBJECT *v4; // rbx
  _QWORD *Buffer; // [rsp+40h] [rbp+8h] BYREF

  Buffer = (_QWORD *)a1;
  if ( (byte_140C0DD4C & 2) != 0 )
  {
    sub_14056370C(
      a1,
      (const EVENT_DESCRIPTOR *)qword_14003B370,
      a3,
      *(const wchar_t **)(a1 + 8),
      *(const wchar_t **)(a1 + 16));
    a1 = (__int64)Buffer;
  }
  if ( *(_QWORD *)(a1 + 88) )
  {
    sub_140953AB8(*(PVOID *)(a1 + 88));
    Buffer[11] = 0LL;
    a1 = (__int64)Buffer;
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
    *(_DWORD *)(a1 + 4) |= 2u;
    v3 = (struct _DEVICE_OBJECT *)sub_140779C10(Buffer[14], 0x746C6644u);
    v4 = v3;
    if ( v3 )
    {
      IoInvalidateDeviceRelations(v3, SingleBusRelations);
      ObfDereferenceObject(v4);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 112) )
    {
      sub_14095336C((const wchar_t **)a1, a2, a3);
      a1 = (__int64)Buffer;
    }
    if ( (byte_140C0DD4C & 2) != 0 )
      sub_14056370C(
        a1,
        (const EVENT_DESCRIPTOR *)qword_14003B450,
        a3,
        *(const wchar_t **)(a1 + 8),
        *(const wchar_t **)(a1 + 16));
    RtlDeleteElementGenericTableAvl(&stru_140C447A0, &Buffer);
    sub_140661C18(Buffer);
  }
}
