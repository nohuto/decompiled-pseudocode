/*
 * XREFs of USBD_ValidateExtendedConfigurationDescriptor @ 0x1C0031C48
 * Callers:
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C0032974 (UsbhGetMsOsExtendedConfigDesc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBD_ValidateExtendedConfigurationDescriptor(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  __int16 v8; // r14
  unsigned int v9; // eax
  _BYTE *Pool2; // r10
  unsigned __int8 *v11; // rcx
  int v12; // r11d
  unsigned __int64 v13; // rdx
  int v14; // edi
  unsigned __int8 v15; // al
  unsigned int v16; // r9d
  unsigned __int8 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // edi
  unsigned int v23; // ecx
  unsigned __int8 *v24; // r8
  unsigned __int8 *v25; // r11
  __int64 v26; // rbp
  __int64 v27; // rax
  _BYTE *v28; // rcx
  char v29; // r9
  unsigned int i; // edx
  unsigned __int8 v31; // al
  char v32; // r9
  _BYTE *v33; // rcx
  unsigned int j; // edx
  unsigned __int8 v35; // al

  v4 = 0;
  v8 = 0;
  if ( a1 && a2 >= 0x10 && a3 && (v9 = *(unsigned __int16 *)(a3 + 2), v9 >= 9) && v9 <= a4 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, 256LL, 1112885333LL);
    if ( Pool2 )
    {
      v11 = (unsigned __int8 *)(a3 + 9);
      v12 = *(unsigned __int8 *)(a3 + 4);
      v13 = a3 + *(unsigned __int16 *)(a3 + 2);
      v14 = 0;
      while ( (unsigned __int64)v11 < v13 )
      {
        if ( (unsigned __int64)&v11[*v11] > v13 )
          goto LABEL_47;
        v15 = v11[1];
        if ( v15 == 11 )
        {
          v16 = 1;
          Pool2[v11[2]] = 1;
          v17 = v11[3];
          if ( v17 > 1u )
          {
            do
            {
              v18 = v16 + v11[2];
              if ( (unsigned int)v18 >= 0x100 )
                goto LABEL_47;
              Pool2[v18] = 2;
              ++v16;
              v17 = v11[3];
            }
            while ( v16 < v17 );
          }
          ++v14;
          v12 -= v17;
          v15 = v11[1];
        }
        if ( v15 == 4 )
        {
          v19 = v11[2];
          if ( !Pool2[v19] )
            Pool2[v19] = 1;
        }
        v20 = *v11;
        if ( !(_BYTE)v20 )
          break;
        v11 += v20;
      }
      v21 = *a1;
      v22 = v12 + v14;
      if ( (unsigned int)(v21 - 16) <= 0x1800 && (unsigned int)v21 <= a2 && *((_WORD *)a1 + 3) == 4 )
      {
        v23 = *((unsigned __int8 *)a1 + 8);
        if ( v23 <= v22 && (unsigned int)v21 >= 24 * v23 + 16 )
        {
          v24 = (unsigned __int8 *)(a1 + 4);
          v25 = (unsigned __int8 *)a1 + v21;
          if ( a1 + 4 >= (unsigned int *)((char *)a1 + v21) )
          {
LABEL_46:
            if ( v8 == (unsigned __int8)v23 )
              goto LABEL_48;
          }
          else
          {
            v26 = 0x87FFFFFE03FFLL;
            while ( 1 )
            {
              v27 = *v24;
              if ( Pool2[v27] != 1 && v22 > 1 )
                break;
              Pool2[v27] = 3;
              v28 = v24 + 2;
              v29 = 0;
              for ( i = 0; i < 8; ++i )
              {
                if ( *v28 )
                {
                  if ( v29 )
                    goto LABEL_47;
                  v31 = *v28 - 48;
                  if ( v31 > 0x2Fu || !_bittest64(&v26, v31) )
                    goto LABEL_47;
                }
                else
                {
                  v29 = 1;
                }
                ++v28;
              }
              v32 = 0;
              v33 = v24 + 10;
              for ( j = 0; j < 8; ++j )
              {
                if ( *v33 )
                {
                  if ( v32 )
                    goto LABEL_47;
                  v35 = *v33 - 48;
                  if ( v35 > 0x2Fu || !_bittest64(&v26, v35) )
                    goto LABEL_47;
                }
                else
                {
                  v32 = 1;
                }
                ++v33;
              }
              v24 += 24;
              ++v8;
              if ( v24 >= v25 )
              {
                LOBYTE(v23) = *((_BYTE *)a1 + 8);
                goto LABEL_46;
              }
            }
          }
        }
      }
LABEL_47:
      v4 = -1073741811;
LABEL_48:
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
