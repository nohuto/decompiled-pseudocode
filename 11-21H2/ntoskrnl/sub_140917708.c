/*
 * XREFs of sub_140917708 @ 0x140917708
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     sub_140208AD8 @ 0x140208AD8 (sub_140208AD8.c)
 *     sub_140208C24 @ 0x140208C24 (sub_140208C24.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140657398 @ 0x140657398 (sub_140657398.c)
 *     sub_140657950 @ 0x140657950 (sub_140657950.c)
 *     sub_140718CA8 @ 0x140718CA8 (sub_140718CA8.c)
 *     sub_14071A730 @ 0x14071A730 (sub_14071A730.c)
 *     sub_14071B99C @ 0x14071B99C (sub_14071B99C.c)
 *     sub_140916454 @ 0x140916454 (sub_140916454.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140917708(__int64 a1, unsigned __int16 *a2, _DWORD *a3, UNICODE_STRING *a4)
{
  volatile signed __int32 *v6; // rsi
  __int64 v9; // r8
  int v10; // ebx
  unsigned int v11; // edx
  char v12; // bl
  wchar_t *Buffer; // rcx
  wchar_t *v14; // rcx
  unsigned int v16; // [rsp+30h] [rbp-40h] BYREF
  volatile signed __int32 *v17; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR v18; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v19; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  char v21; // [rsp+B0h] [rbp+40h] BYREF

  v18 = 0LL;
  v16 = 0;
  v21 = 0;
  v6 = 0LL;
  DestinationString = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v19, 0LL);
  *a3 |= 8u;
  if ( sub_140718CA8(a1, a2, &v21) )
    goto LABEL_2;
  v10 = sub_140916454(a1, &DestinationString, v9);
  if ( v10 >= 0 )
  {
    v11 = *a2 + DestinationString.Length + 2;
    if ( v11 <= 0xFFFF )
    {
      v19.MaximumLength = *a2 + DestinationString.Length + 2;
      v19.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v11, 0x624E4D43u);
      if ( !v19.Buffer )
      {
        v10 = -1073741670;
        goto LABEL_24;
      }
      sub_140208AD8(&v19, &DestinationString.Length);
      sub_140657950(&v19.Length);
      sub_140208C24(&v19, a2);
      if ( (*a3 & 1) != 0 && v21 )
      {
        v10 = sub_14071B99C(0LL, 16, &v17);
        if ( v10 >= 0 )
        {
          v12 = sub_140657398(0LL, (__m128i *)&v19, 0LL, 16, &v16, &v18);
          sub_14071A730(0LL, 16, v17);
          if ( v12 )
          {
            Buffer = a4->Buffer;
            if ( Buffer )
              ExFreePoolWithTag(Buffer, 0);
            *a4 = v19;
            RtlInitUnicodeString(&v19, 0LL);
            v10 = 260;
            goto LABEL_22;
          }
          goto LABEL_2;
        }
        v6 = v17;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 8) & 0x7FE00000u) <= 0x800000 )
        {
LABEL_2:
          v10 = -1073741199;
          goto LABEL_22;
        }
        v14 = a4->Buffer;
        if ( v14 )
          ExFreePoolWithTag(v14, 0);
        *a4 = v19;
        RtlInitUnicodeString(&v19, 0LL);
        v10 = 260;
      }
      if ( v6 )
        sub_14071A730(0LL, 16, v6);
      goto LABEL_22;
    }
    v10 = -1073741811;
  }
LABEL_22:
  if ( v19.Buffer )
    ExFreePoolWithTag(v19.Buffer, 0);
LABEL_24:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v10;
}
