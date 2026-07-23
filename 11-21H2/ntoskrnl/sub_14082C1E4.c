/*
 * XREFs of sub_14082C1E4 @ 0x14082C1E4
 * Callers:
 *     sub_14082BD64 @ 0x14082BD64 (sub_14082BD64.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14041CCA0 @ 0x14041CCA0 (sub_14041CCA0.c)
 *     sub_14082C308 @ 0x14082C308 (sub_14082C308.c)
 *     sub_14082C34C @ 0x14082C34C (sub_14082C34C.c)
 */

__int64 __fastcall sub_14082C1E4(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-19h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v7; // [rsp+68h] [rbp+17h]
  int v8; // [rsp+70h] [rbp+1Fh]
  int v9; // [rsp+74h] [rbp+23h]
  __int64 v10; // [rsp+78h] [rbp+27h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp+2Fh]
  int v12; // [rsp+88h] [rbp+37h]
  int v13; // [rsp+8Ch] [rbp+3Bh]
  _OWORD *v14; // [rsp+90h] [rbp+3Fh]
  __int64 v15; // [rsp+98h] [rbp+47h]

  v13 = 0;
  v9 = 0;
  v7 = 0LL;
  DestinationString = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v10 = 0LL;
  v15 = 0LL;
  p_DestinationString = &DestinationString;
  v14 = (_OWORD *)qword_140D3CA48;
  v8 = 48;
  v12 = 576;
  v2 = sub_14041CCA0(a1 + 232, 983055LL);
  if ( v2 >= 0 )
  {
    v2 = sub_14082C34C(SecurityDescriptor);
    if ( v2 >= 0 )
    {
      v3 = *(_QWORD *)(a1 + 232);
      v15 = 0LL;
      v10 = v3;
      v8 = 48;
      p_DestinationString = (UNICODE_STRING *)&qword_140003570;
      v14 = SecurityDescriptor;
      v12 = 576;
      v2 = sub_14041CCA0(a1 + 240, 983055LL);
    }
  }
  sub_14082C308(SecurityDescriptor);
  return (unsigned int)v2;
}
