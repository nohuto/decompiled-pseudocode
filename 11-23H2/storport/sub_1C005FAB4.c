/*
 * XREFs of sub_1C005FAB4 @ 0x1C005FAB4
 * Callers:
 *     sub_1C005F5A4 @ 0x1C005F5A4 (sub_1C005F5A4.c)
 * Callees:
 *     sub_1C0018028 @ 0x1C0018028 (sub_1C0018028.c)
 *     sub_1C0018124 @ 0x1C0018124 (sub_1C0018124.c)
 *     sub_1C001FCD0 @ 0x1C001FCD0 (sub_1C001FCD0.c)
 *     sub_1C001FE14 @ 0x1C001FE14 (sub_1C001FE14.c)
 *     sub_1C001FE60 @ 0x1C001FE60 (sub_1C001FE60.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 */

__int64 __fastcall sub_1C005FAB4(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  bool v3; // zf
  _BYTE *v4; // r14
  char v7; // di
  char v8; // r10
  unsigned int v9; // r11d
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rcx
  IRP *v16; // rax
  IRP *v17; // rbp
  int Status; // esi
  unsigned __int8 v19; // r10
  _BYTE *v20; // r9
  char v21; // r8
  int v22; // eax
  unsigned __int16 v23; // dx
  int v24; // r9d
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  char v26; // r11
  _BYTE *v27; // rcx
  unsigned __int8 v28; // dl
  unsigned __int8 v29; // al
  unsigned __int8 v30; // dl
  unsigned __int8 v31; // al
  char *v32; // rax
  int v33; // r8d
  unsigned __int8 v34; // r8
  _BYTE *v35; // rdx
  __int64 v37; // [rsp+20h] [rbp-38h]
  struct _IO_STATUS_BLOCK v38; // [rsp+30h] [rbp-28h] BYREF
  char v39; // [rsp+60h] [rbp+8h] BYREF
  _BYTE *v40; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_BYTE *)(a2 + 2) == 40;
  v38 = 0LL;
  v4 = (_BYTE *)a3;
  v7 = 1;
  if ( v3 )
  {
    v8 = 0;
    if ( !*(_DWORD *)(a2 + 20) )
    {
      v9 = *(_DWORD *)(a2 + 56);
      a3 = 0LL;
      if ( v9 )
      {
        while ( 1 )
        {
          v10 = *(unsigned int *)(a2 + 4 * a3 + 120);
          if ( (unsigned int)v10 >= 0x80 )
          {
            v11 = *(unsigned int *)(a2 + 16);
            if ( (unsigned int)v10 < (unsigned int)v11 )
              break;
          }
LABEL_11:
          a3 = (unsigned int)(a3 + 1);
          if ( (unsigned int)a3 >= v9 )
            goto LABEL_12;
        }
        v12 = (unsigned int)v10;
        v13 = *(_DWORD *)(v10 + a2) - 64;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( !v14 )
          {
            if ( v12 + 56 <= v11 )
              v8 = 1;
            goto LABEL_10;
          }
          if ( v14 != 1 )
            goto LABEL_10;
        }
        if ( v12 + 40 <= v11 )
          goto LABEL_12;
LABEL_10:
        if ( v8 )
          goto LABEL_12;
        goto LABEL_11;
      }
    }
  }
LABEL_12:
  v15 = *(_QWORD *)(a1 + 8);
  v40 = 0LL;
  v39 = 0;
  v16 = sub_1C001FCD0(v15, a2, a3, &v38);
  v17 = v16;
  if ( v16 )
  {
    Status = sub_1C0018124(*(PDEVICE_OBJECT *)(a1 + 8), v16);
    if ( Status >= 0 )
    {
      Status = v17->IoStatus.Status;
      if ( Status >= 0 )
      {
        Status = sub_1C001FE60(*(_BYTE *)(a2 + 3));
        if ( Status >= 0 )
        {
          if ( *(_BYTE *)(a2 + 2) == 40 )
          {
            sub_1C0018028(a2, 0LL, 0LL, 0LL, &v40, &v39);
            v19 = v39;
            v20 = v40;
          }
          else
          {
            v20 = *(_BYTE **)(a2 + 32);
            v19 = *(_BYTE *)(a2 + 11);
          }
          if ( *(char *)(a2 + 3) < 0 && v20 )
          {
            v21 = *v20 & 0x7F;
            if ( (unsigned __int8)(v21 - 114) <= 1u )
            {
              v26 = 0;
              if ( v19 )
              {
                v27 = 0LL;
                v28 = 0;
                if ( (unsigned __int8)(v21 - 114) <= 1u )
                {
                  if ( v20 + 8 <= &v20[v19] )
                  {
                    v29 = v20[7];
                    if ( v29 <= 0xF7u )
                    {
                      v30 = v19;
                      v31 = v29 + 8;
                      if ( v31 <= v19 )
                        v30 = v31;
                      v28 = v30 - 8;
                      if ( v28 )
                      {
                        v27 = v20 + 8;
                        v26 = 1;
                      }
                    }
                  }
                  if ( v26 )
                  {
                    v39 = 9;
                    if ( v27 )
                    {
                      if ( v28 )
                      {
LABEL_56:
                        if ( v28 >= 2u )
                        {
                          v32 = &v39;
                          v33 = 0;
                          while ( *v27 != *v32 )
                          {
                            ++v33;
                            ++v32;
                            if ( v33 )
                            {
                              v34 = v27[1] + 2;
                              if ( v28 <= v34 )
                                goto LABEL_67;
                              v27 += v34;
                              v28 -= v34;
                              goto LABEL_56;
                            }
                          }
                          if ( v28 >= 0xEu )
                          {
                            v35 = v27 + 11;
                            if ( v27[9] != 0xF4 || *v35 != 44 )
                              v7 = 0;
                            *v4 = v7;
                            if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
                              && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
                              && BYTE1(off_1C0093070->Timer) >= 4u )
                            {
                              v22 = (unsigned __int8)*v35;
                              v23 = 71;
                              v24 = (unsigned __int8)v27[9];
                              AttachedDevice = off_1C0093070->AttachedDevice;
                              goto LABEL_38;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else if ( (unsigned __int8)(v21 - 112) <= 1u )
            {
              if ( v19 >= 0xCu )
              {
                if ( v20[10] != 0xF4 || v20[9] != 44 )
                  v7 = 0;
                *v4 = v7;
                if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
                  && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
                  && BYTE1(off_1C0093070->Timer) >= 4u )
                {
                  v22 = (unsigned __int8)v20[9];
                  v23 = 72;
                  v24 = (unsigned __int8)v20[10];
                  AttachedDevice = off_1C0093070->AttachedDevice;
LABEL_38:
                  LODWORD(v37) = v22;
                  sub_1C003EE60((__int64)AttachedDevice, v23, (__int64)&unk_1C0083530, v24, v37);
                }
              }
            }
            else if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
                   && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
                   && BYTE1(off_1C0093070->Timer) >= 2u )
            {
              sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x49u, (__int64)&unk_1C0083530);
            }
          }
          else
          {
            Status = -1073741823;
          }
        }
      }
    }
LABEL_67:
    sub_1C001FE14(v17);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Status;
}
