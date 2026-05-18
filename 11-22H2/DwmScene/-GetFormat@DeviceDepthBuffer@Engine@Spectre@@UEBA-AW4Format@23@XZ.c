/*
 * XREFs of ?GetFormat@DeviceDepthBuffer@Engine@Spectre@@UEBA?AW4Format@23@XZ @ 0x180053320
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFormat@DeviceTexture@Engine@Spectre@@QEBA?AW4Format@23@XZ @ 0x1800566C4 (-GetFormat@DeviceTexture@Engine@Spectre@@QEBA-AW4Format@23@XZ.c)
 */

__int64 __fastcall Spectre::Engine::DeviceDepthBuffer::GetFormat(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return Spectre::Engine::DeviceTexture::GetFormat();
  return result;
}
