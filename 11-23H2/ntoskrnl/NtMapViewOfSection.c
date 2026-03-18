/*
 * XREFs of NtMapViewOfSection @ 0x140720E50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     memset @ 0x140435A00 (memset.c)
 *     EtwTiLogMapExecView @ 0x140682E58 (EtwTiLogMapExecView.c)
 *     MiValidateZeroBits @ 0x1407210B0 (MiValidateZeroBits.c)
 *     MiMapViewOfSectionCommon @ 0x140721110 (MiMapViewOfSectionCommon.c)
 *     MiMapParametersInitialize @ 0x14072154C (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x140721660 (MiMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1407A3DBC (DbgkMapViewOfSection.c)
 */

__int64 NtMapViewOfSection(__int64 a1, __int64 a2, _QWORD *a3, ...)
{
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rbx
  int v9; // esi
  _QWORD *v10; // rdi
  _QWORD *v11; // r12
  int v12; // r14d
  int v13; // ebx
  __int64 v14; // [rsp+20h] [rbp-118h]
  int v15[2]; // [rsp+28h] [rbp-110h]
  char PreviousMode; // [rsp+50h] [rbp-E8h]
  __int64 v17[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v18; // [rsp+68h] [rbp-D0h] BYREF
  PVOID Object[2]; // [rsp+78h] [rbp-C0h]
  int v20; // [rsp+88h] [rbp-B0h]
  _QWORD v21[16]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+158h] [rbp+20h] BYREF
  va_list va; // [rsp+158h] [rbp+20h]
  __int64 v24; // [rsp+160h] [rbp+28h]
  _QWORD *v25; // [rsp+168h] [rbp+30h]
  _QWORD *v26; // [rsp+170h] [rbp+38h]
  __int64 v27; // [rsp+178h] [rbp+40h]
  __int64 v28; // [rsp+180h] [rbp+48h]
  __int64 v29; // [rsp+188h] [rbp+50h]
  va_list va1; // [rsp+190h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD *);
  v26 = va_arg(va1, _QWORD *);
  v27 = va_arg(va1, _QWORD);
  v28 = va_arg(va1, _QWORD);
  v29 = va_arg(va1, _QWORD);
  memset(v21, 0, sizeof(v21));
  *(_OWORD *)v17 = 0LL;
  v18 = 0LL;
  *(_OWORD *)Object = 0LL;
  result = MiValidateZeroBits((__int64 *)va, v6);
  if ( (int)result >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v8 = v22;
    v9 = v29;
    v10 = v25;
    v11 = v26;
    result = MiMapViewOfSectionCommon(a2, a1, 0LL, a3, v26, v25, v29, v22, PreviousMode, v17);
    if ( (int)result < 0 )
    {
      ++dword_140C67F98;
    }
    else
    {
      v12 = v28;
      v13 = MiMapParametersInitialize(v21, v17[1], v28, v9, v8);
      if ( v13 < 0
        || (v13 = MiMapViewOfSection(Object[0], (unsigned int)v21, (unsigned int)v17, v24, (__int64)&v18, v27, 0),
            v20 = v13,
            v13 < 0) )
      {
        if ( v17[0] )
          ++dword_140C67F9C;
        else
          ++dword_140C67F98;
      }
      else
      {
        if ( (v21[7] & 0x400000000LL) != 0 )
          DbgkMapViewOfSection(Object[1]);
        if ( (*((_DWORD *)Object[0] + 14) & 0x20) == 0 && (BYTE8(v18) & 2) != 0 )
        {
          v15[0] = v9;
          LODWORD(v14) = v12;
          EtwTiLogMapExecView((__int64)Object[1], PreviousMode, v17[0], v17[1], v14, *(_QWORD *)v15);
        }
        *v11 = v21[3];
        *a3 = v17[0];
        if ( v10 )
          *v10 = v18;
      }
      ObfDereferenceObject(Object[0]);
      ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
      return (unsigned int)v13;
    }
  }
  return result;
}
