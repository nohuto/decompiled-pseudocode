/*
 * XREFs of MiMapViewOfSectionExCommon @ 0x1407A36E0
 * Callers:
 *     MmMapViewOfSectionEx @ 0x14032A5EC (MmMapViewOfSectionEx.c)
 *     PspMapView @ 0x1405A69DC (PspMapView.c)
 *     NtMapViewOfSectionEx @ 0x1407A3120 (NtMapViewOfSectionEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwTiLogMapExecView @ 0x140682E58 (EtwTiLogMapExecView.c)
 *     MiMapViewOfSectionCommon @ 0x140721310 (MiMapViewOfSectionCommon.c)
 *     MiMapParametersInitialize @ 0x14072174C (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x140721860 (MiMapViewOfSection.c)
 *     MiMapExParametersInitialize @ 0x1407A3990 (MiMapExParametersInitialize.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1407A3CD0 (MiCaptureAllocateMapExtendedParameters.c)
 *     DbgkMapViewOfSection @ 0x1407A3FAC (DbgkMapViewOfSection.c)
 */

__int64 __fastcall MiMapViewOfSectionExCommon(
        void *a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        int a7,
        int a8,
        volatile void *Address,
        ULONGLONG ullMultiplicand,
        int a11,
        __int64 a12,
        char a13,
        int a14)
{
  __int64 result; // rax
  int MapExtendedParameters; // ebx
  void *v19; // [rsp+20h] [rbp-168h]
  int v20[2]; // [rsp+28h] [rbp-160h]
  __int64 v21[2]; // [rsp+50h] [rbp-138h] BYREF
  __int128 v22; // [rsp+60h] [rbp-128h] BYREF
  PVOID Object[2]; // [rsp+70h] [rbp-118h]
  int v24; // [rsp+80h] [rbp-108h]
  __int64 v25[16]; // [rsp+90h] [rbp-F8h] BYREF
  _QWORD v26[15]; // [rsp+110h] [rbp-78h] BYREF

  memset(v25, 0, sizeof(v25));
  *(_OWORD *)v21 = 0LL;
  v22 = 0LL;
  *(_OWORD *)Object = 0LL;
  memset(v26, 0, 0x48uLL);
  result = MiMapViewOfSectionCommon(a2, a1, a3, a4, (unsigned __int64)a6, (unsigned __int64)a5, a8, 0, a13, v21);
  if ( (int)result < 0 )
  {
    if ( v21[0] )
      ++dword_140C67F9C;
    else
      ++dword_140C67F98;
    return result;
  }
  MapExtendedParameters = MiCaptureAllocateMapExtendedParameters(Address, (unsigned int)ullMultiplicand, v26);
  if ( MapExtendedParameters < 0 )
  {
LABEL_12:
    if ( MapExtendedParameters >= 0 )
      goto LABEL_13;
    goto LABEL_22;
  }
  if ( (v26[7] & 0xFFFFFFFFFFFFFF1FuLL) == 0 )
  {
    MapExtendedParameters = MiMapParametersInitialize(
                              v25,
                              (__int64)Object[0],
                              (__int64)Object[1],
                              v21[0],
                              v21[1],
                              a7,
                              a8,
                              0LL);
    if ( MapExtendedParameters >= 0 )
    {
      MapExtendedParameters = MiMapExParametersInitialize(v25, v21, v26);
      if ( MapExtendedParameters >= 0 )
      {
        HIDWORD(v25[8]) = a11;
        v25[9] = a12;
        LODWORD(v25[8]) |= a14;
        MapExtendedParameters = MiMapViewOfSection((__int64)Object[0], (__int64)v25, (void **)v21, 0LL, &v22, 1, 0);
        v24 = MapExtendedParameters;
        if ( MapExtendedParameters >= 0 )
        {
          if ( (v25[7] & 0x400000000LL) != 0 )
            DbgkMapViewOfSection(Object[1]);
          if ( (*((_DWORD *)Object[0] + 14) & 0x20) == 0 && (BYTE8(v22) & 2) != 0 )
          {
            v20[0] = a8;
            LODWORD(v19) = a7;
            EtwTiLogMapExecView((__int64)Object[1], a13, v21[0], v21[1], v19, *(_QWORD *)v20);
          }
          *a4 = v21[0];
          *a6 = v25[3];
          if ( a5 )
            *a5 = v22;
        }
      }
    }
    goto LABEL_12;
  }
  MapExtendedParameters = -1073741811;
LABEL_22:
  if ( v21[0] )
    ++dword_140C67F9C;
  else
    ++dword_140C67F98;
LABEL_13:
  if ( !a3 )
  {
    ObfDereferenceObject(Object[0]);
    ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
  }
  return (unsigned int)MapExtendedParameters;
}
